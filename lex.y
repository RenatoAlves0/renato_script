%{
#include <stdio.h>
#include <math.h>
int yylex();
void yyerror (char *s) {
    printf("Erro: %s\n", s);
}
%}
%union {
    float decimal;
    int inteiro;
}

%token <decimal> DECIMAL
%token <inteiro> INTEIRO
%token FIM
%token RAIZ
%token RESTO
%token ELEVACAO
%token DIVISAO
%token MULTIPLICACAO
%token PARENTESEABERTO
%token PARENTESEFECHADO
%left ADICAO SUBTRACAO
%left MULTIPLICACAO DIVISAO
%right ELEVACAO RAIZ RESTO
%right NEG
%type <decimal> expdecimal
%type <decimal> valor
%%

val: expdecimal FIM { printf ("Resultado: %.2f\n",$1);}
    ;
expdecimal: expdecimal ELEVACAO expdecimal {$$ = pow($1,$3); printf ("%.2f ^ %.2f = %.2f\n",$1,$3,$$);}
    |RAIZ expdecimal {$$ = sqrt($2); printf ("\\/ %.2f = %.2f\n",$2,$$);}
    |expdecimal MULTIPLICACAO expdecimal {$$ = $1 * $3; printf ("%.2f * %.2f = %.2f\n",$1,$3,$$);}
    |expdecimal DIVISAO expdecimal {$$ = $1 / $3; printf ("%.2f / %.2f = %.2f\n",$1,$3,$$);}
    |expdecimal ADICAO expdecimal {$$ = $1 + $3; printf ("%.2f + %.2f = %.2f\n",$1,$3,$$);}
    |expdecimal SUBTRACAO expdecimal {$$ = $1 - $3; printf ("%.2f - %.2f = %.2f\n",$1,$3,$$);}
    |PARENTESEABERTO expdecimal PARENTESEFECHADO {$$ = $2;}
    |SUBTRACAO expdecimal %prec NEG {$$ = -$2;}
    |valor {$$ = $1;}
    ;
valor: DECIMAL {$$ = $1;}
    ;
%%
#include "lex.yy.c"
int main() {
    yyin=fopen("renato_script","r");
    yyparse();
    yylex();
    fclose(yyin);
    return 0;
}