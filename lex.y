%{
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct variaveis{
    char nome[255];
    double valor;
    struct variaveis *next;
} Variaveis;

Variaveis *lista = NULL;

Variaveis *buscar_variavel(Variaveis *l, char variaveis[]){
        Variaveis *list;
        for(list = l; list != NULL; list = list -> next){
            if(strcmp(list -> nome, variaveis) == 0){
                return list;
            }
        }
        return NULL;
    }

Variaveis *inserir_nova_variavel( Variaveis *l, char nome[]){
    Variaveis *nova = (Variaveis*)malloc(sizeof(Variaveis));
    strcpy(nova -> nome, nome);
    nova -> valor = 0;
    nova -> next = l;
    return nova;  
}

Variaveis*l1;
int OK;

int yylex();
void yyerror (char *s) {
    printf("Erro: %s\n", s);
}
%}
%union {
    int inteiro;
    double decimal;
    char caracteres[255];
}

%token <decimal> DECIMAL
%token <caracteres> NOMEVARIAVEL
%token <caracteres> CARACTERES
%type <decimal> expressoes
%type <decimal> valor
%type <inteiro> operadores
%token E
%token OU
%token IGUAL
%token DIFERENTE
%token MENORIGUAL
%token MAIORIGUAL
%token INICIO
%token MENOR
%token MAIOR
%token CHAVEABERTA
%token CHAVEFECHADA
%token SE
%token SENAO
%token FIM
%token VAR
%token ATRIBUICAO
%token PARENTESEABERTO
%token PARENTESEFECHADO
%token SAIDA
%token SAIDA_V
%token SAIDA_P
%token SAIDAL
%token SAIDAL_V
%token SAIDAL_P
%token ENTRADA
%left ADICAO SUBTRACAO
%left MULTIPLICACAO DIVISAO
%right ELEVACAO RAIZ RESTO
%right NEG
%nonassoc SEX
%%

programa: INICIO codigo FIM;
codigo: codigo comandos |;

comandos: SAIDAL PARENTESEABERTO expressoes PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;34m");
        printf ("%.2lf\n\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDA PARENTESEABERTO expressoes PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;34m");
        printf ("%.2lf\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDAL_V PARENTESEABERTO expressoes PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%.2lf\n\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDA_V PARENTESEABERTO expressoes PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%.2lf\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDAL_P PARENTESEABERTO expressoes PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%.2lf\n\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDA_P PARENTESEABERTO expressoes PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%.2lf\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDAL PARENTESEABERTO CARACTERES PARENTESEFECHADO { 
        if(OK == 1) {
        printf ("%s\n",$3);
        }
    }
    | SAIDA PARENTESEABERTO CARACTERES PARENTESEFECHADO { 
        if(OK == 1) {
        printf ("%s",$3);
        }
    }
    | SAIDAL_V PARENTESEABERTO CARACTERES PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%s\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDA_V PARENTESEABERTO CARACTERES PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;32m");
        printf ("%s",$3);
        printf("\033[0m");
        }
    }
    | SAIDAL_P PARENTESEABERTO CARACTERES PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%s\n",$3);
        printf("\033[0m");
        }
    }
    | SAIDA_P PARENTESEABERTO CARACTERES PARENTESEFECHADO { 
        if(OK == 1) {
        printf("\033[1;35m");
        printf ("%s",$3);
        printf("\033[0m");
        }
    }
    | SAIDA PARENTESEABERTO PARENTESEFECHADO {}
    | SAIDAL PARENTESEABERTO PARENTESEFECHADO {
        if(OK == 1) {
        printf ("\n");
        }
    }
    | ENTRADA PARENTESEABERTO NOMEVARIAVEL PARENTESEFECHADO {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, $3); 
        if(aux == NULL){
           printf("\033[1;31m");
           printf("Variavel '%s' não declarada!\n", $3);
           printf("\033[0m");
       } else {
           //char value_string[255];
           double value;
           printf("\033[1;34m");
           printf("Insira o valor de '%s': ", $3);
           //scanf("%s", &value_string);
           scanf("%lf", &value);
           printf("\033[0m");
           //aux -> valor = value_string;
           aux -> valor = value;
       }
        }
    }
    | VAR NOMEVARIAVEL {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, $2);
        if(aux == NULL){
            lista = inserir_nova_variavel(lista, $2);   
        } else {
            printf("\033[1;33m");
            printf("Variável '%s' já declarada!\n", $2);
            printf("\033[0m");
        }
        }
    }
    | NOMEVARIAVEL ATRIBUICAO expressoes {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, $1); 
        if(aux == NULL){
            printf("\033[1;31m");
            printf("Variavel '%s' não declarada!\n", $1);
            printf("\033[0m");
        } else {
                aux -> valor = $3;
        }
        }
    }
    | VAR NOMEVARIAVEL ATRIBUICAO expressoes {
        if(OK == 1) {
        Variaveis *aux = buscar_variavel(lista, $2);
        if(aux == NULL){
            lista = inserir_nova_variavel(lista, $2);
            Variaveis *aux2 = buscar_variavel(lista, $2); 
            aux2 -> valor = $4;
        } else {
            printf("\033[1;33m");
            printf("Variável '%s' já declarada!\n", $2);
            printf("\033[0m");
        }
        }
    }
    | SE PARENTESEABERTO operadores PARENTESEFECHADO comandos %prec SEX			
	| SE PARENTESEABERTO operadores PARENTESEFECHADO comandosse SENAO comandos
    | CHAVEABERTA lista_comandos CHAVEFECHADA	{
							OK = 1;
						}
    ;
comandosse:
	 CHAVEABERTA lista_comandos CHAVEFECHADA {
			if(OK==1) OK=0;
			else OK=1;
			}
	;
lista_comandos:
		comandos
	|	lista_comandos comandos
	;

expressoes: expressoes ELEVACAO expressoes {
        $$ = pow($1,$3);
    }
    |RAIZ expressoes {$$ = sqrt($2);}
    |expressoes MULTIPLICACAO expressoes {$$ = $1 * $3;}
    |expressoes DIVISAO expressoes {$$ = $1 / $3;}
    |expressoes ADICAO expressoes {$$ = $1 + $3;}
    |expressoes SUBTRACAO expressoes {$$ = $1 - $3;}
    |PARENTESEABERTO expressoes PARENTESEFECHADO {$$ = $2;}
    |SUBTRACAO expressoes %prec NEG {$$ = -$2;}
    |valor {$$ = $1;}
    |NOMEVARIAVEL {
        Variaveis *aux = buscar_variavel(lista, $1);
        if(aux == NULL) {
            printf("\033[1;31m");
            printf("Variavel '%s' não declarada!\n", $1);
            $$ = 0;
            printf("\033[0m");
        }
        else $$ = aux -> valor;
        };

valor: DECIMAL {$$ = $1;};
operadores: expressoes MENOR expressoes {
					if ($1 < $3) $$ = OK = 1;
					else $$ = OK = 0;
					}
    | PARENTESEABERTO expressoes MENOR expressoes PARENTESEFECHADO {
					if ($2 < $4) $$ = OK = 1;
					else $$ = OK = 0;
					}
    | expressoes MAIOR expressoes {
                if ($1 > $3) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | PARENTESEABERTO expressoes MAIOR expressoes PARENTESEFECHADO {
                if ($2 > $4) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | expressoes MAIORIGUAL expressoes {
                if ($1 >= $3) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | PARENTESEABERTO expressoes MAIORIGUAL expressoes PARENTESEFECHADO {
                if ($2 >= $4) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | expressoes MENORIGUAL expressoes {
                if ($1 <= $3) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | PARENTESEABERTO expressoes MENORIGUAL expressoes PARENTESEFECHADO {
                if ($2 <= $4) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | expressoes IGUAL expressoes {
                if ($1 == $3) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | PARENTESEABERTO expressoes IGUAL expressoes PARENTESEFECHADO {
                if ($2 == $4) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | expressoes DIFERENTE expressoes {
                if ($1 != $3) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | PARENTESEABERTO expressoes DIFERENTE expressoes PARENTESEFECHADO {
                if ($2 != $4) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | operadores E operadores {
                if ($1 == 1 && $3 == 1) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | PARENTESEABERTO operadores E operadores PARENTESEFECHADO {
                if ($2 == 1 && $4 == 1) $$ = OK = 1;
                else $$ = OK = 0;
                }
    | operadores OU operadores {
                if ($1 == 0 && $3 == 0) $$ = OK = 0;
                else $$ = OK = 1;
                }
    | PARENTESEABERTO operadores OU operadores PARENTESEFECHADO {
                if ($2 == 0 && $4 == 0) $$ = OK = 0;
                else $$ = OK = 1;
                }
	;
%%
#include "lex.yy.c"
int main() {
    OK = 1;
    l1 = NULL;
    yyin=fopen("renato_script.txt","r");
    yyparse();
    yylex();
    fclose(yyin);
    return 0;
}