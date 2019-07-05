%{
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct str{
    char c[50];
    float v;
    struct str *next;
} Str;

Str *lista = NULL;

Str *buscaStr(Str *l, char str[]){
        Str *list;
        for(list = l; list != NULL; list=list->next){
            if(strcmp(list->c, str) == 0){
                return list;
            }
        }
        return NULL;
    }

Str *insereLista( Str *l, char c[]){
    Str *nova = (Str*)malloc(sizeof(Str));
    strcpy(nova->c, c);
    nova->v = 0;
    nova->next = l;
    return nova;  
}

int yylex();
void yyerror (char *s) {
    printf("Erro: %s\n", s);
}
%}
%union {
    float decimal;
    char str[50];
}

%token <decimal> DECIMAL
%token <str> NOMEVARIAVEL
%token INICIO
%token FIM
%token VAR
%token ATRIBUICAO
%token RAIZ
%token RESTO
%token ELEVACAO
%token DIVISAO
%token MULTIPLICACAO
%token PARENTESEABERTO
%token PARENTESEFECHADO
%token SAIDA
%token ENTRADA
%left ADICAO SUBTRACAO
%left MULTIPLICACAO DIVISAO
%right ELEVACAO RAIZ RESTO
%right NEG
%type <decimal> exp
%type <decimal> valor
%%

programa: INICIO codigo FIM;
codigo: codigo cmdos |;

cmdos: SAIDA PARENTESEABERTO exp PARENTESEFECHADO { printf ("%.2f \n",$3); }
    | VAR NOMEVARIAVEL {
        Str *aux = buscaStr(lista, $2);
       if(aux == NULL){
           lista = insereLista(lista, $2);   
       } else {
           printf("Variável já declarada!");
       }
    }

    | NOMEVARIAVEL ATRIBUICAO exp {
       Str *aux = buscaStr(lista, $1); 
       if(aux == NULL){
           printf("Variavel não declarada!");
       } else {
            aux->v = $3;
       }
    }

    | ENTRADA PARENTESEABERTO NOMEVARIAVEL PARENTESEFECHADO {
        Str *busca = buscaStr(lista, $3); 
        if(busca == NULL){
           printf("Variável não declarada!");
        } else {
           scanf("%f", &busca->v);
        }

    };

exp: exp ELEVACAO exp {$$ = pow($1,$3);}
    |RAIZ exp {$$ = sqrt($2);}
    |exp MULTIPLICACAO exp {$$ = $1 * $3;}
    |exp DIVISAO exp {$$ = $1 / $3;}
    |exp ADICAO exp {$$ = $1 + $3;}
    |exp SUBTRACAO exp {$$ = $1 - $3;}
    |PARENTESEABERTO exp PARENTESEFECHADO {$$ = $2;}
    |SUBTRACAO exp %prec NEG {$$ = -$2;}
    |valor {$$ = $1;}
    |NOMEVARIAVEL {
        Str *aux = buscaStr(lista, $1);
        if(aux == NULL){printf("Variável não existe!");}
        $$ = aux->v;
        };

valor: DECIMAL {$$ = $1;};
%%
#include "lex.yy.c"
int main() {
    yyin=fopen("renato_script","r");
    yyparse();
    yylex();
    fclose(yyin);
    return 0;
}