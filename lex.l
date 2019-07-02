%{
    
%}
/*VARIAVEIS*/
ATRIBUICAO =
/*TIPOS*/
DECIMAL {NUMERO}|{NUMERO}*{PONTO}{NUMERO}
INTEIRO {NUMERO}
BOOLEANO ({FALSO}|{VERDADEIRO})
CARACTERES (["].*["]|['].+['])
CARACTEREVAZIO (["]["]|[']['])
CARACTERE ['].[']
/*SUB TIPOS*/
NUMERO [0-9]+
FALSO falso
VERDADEIRO verdadeiro
/*LÓGICOS*/
IGUAL ==
DIFERENTE !=
MENORIGUAL <=
MAIORIGUAL >=
MENOR <
MAIOR >
E (e|&&)
OU (ou|"||")
/*MATEMATICOS*/
ADICAO "+"
SUBTRACAO "-"
MULTIPLICACAO "*"
DIVISAO "/"
RESTO "%"
ELEVACAO "^"
RAIZ "\\/"
/*RESTO ({DECIMAL}"%"{DECIMAL}|{DECIMAL}"%"{INTEIRO}|{INTEIRO}"%"{INTEIRO}|{INTEIRO}"%"{DECIMAL})*/
/*ELEVADO ({DECIMAL}"^"{DECIMAL}|{DECIMAL}"^"{INTEIRO}|{INTEIRO}"^"{INTEIRO}|{INTEIRO}"^"{DECIMAL})*/
/*RAIZ ("\/"{DECIMAL}|"\/"{INTEIRO})*/
/*PALAVRAS RESERVADAS*/
ENTRADA entrada
SAIDA saida
SENAO senao
SE se
PARA para
ENQUANTO enquanto
ESCOLHER escolher
CASO caso
FIM FIM
INICIO INICIO
PONTO \.
ESPACO " "
QUEBRALINHA "\n"
TABULACAO "\t"
PARENTESEABERTO "("
PARENTESEFECHADO ")"
COMENTARIO "//"{QUALQUERCOISA}
COMENTARIOABERTO "/*"
COMENTARIOFECHADO "*/"
COMENTARIOMULTILINHA {COMENTARIOABERTO}{QUALQUERCOISA}{COMENTARIOFECHADO}
/*OUTROS*/
QUALQUERCOISA .*
/*RESTOII {INTEIRO}{ESPACO}{RESTO}{ESPACO}{INTEIRO}*/
/*RESTOID {INTEIRO}{ESPACO}{RESTO}{ESPACO}{DECIMAL}*/
/*RESTODD {DECIMAL}{ESPACO}{RESTO}{ESPACO}{DECIMAL}*/
/*RESTODI {DECIMAL}{ESPACO}{RESTO}{ESPACO}{INTEIRO}*/
DESCARTAR [{ESPACO}{TABULACAO}{QUEBRALINHA}]
%%
{DESCARTAR} {;}
{INICIO} {printf("Início: %s\n", yytext);}
{DECIMAL} {
    yylval.decimal = atof(yytext);
    return DECIMAL;
}
{INTEIRO} {
    yylval.inteiro = atoi(yytext);
    return INTEIRO;
}
{BOOLEANO} {printf("Booleano: %s\n", yytext);}
{CARACTEREVAZIO} {printf("Caractere vazio: %s\n", yytext);}
{CARACTERE} {printf("Caractere: %s\n", yytext);}
{CARACTERES} {printf("Caracteres: %s\n", yytext);}
{IGUAL} {printf("Igual: %s\n", yytext);}
{DIFERENTE} {printf("Diferente: %s\n", yytext);}
{MENORIGUAL} {printf("Menor igual: %s\n", yytext);}
{MAIORIGUAL} {printf("Maior igual: %s\n", yytext);}
{MENOR} {printf("Menor: %s\n", yytext);}
{MAIOR} {printf("Maior: %s\n", yytext);}
{ATRIBUICAO} {printf("Atribuição: %s\n", yytext);}
{E} {printf("E: %s\n", yytext);}
{OU} {printf("Ou: %s\n", yytext);}
{ADICAO} {
    return ADICAO;    
}
{SUBTRACAO} {
    return SUBTRACAO;
}
{MULTIPLICACAO} {
    return MULTIPLICACAO;
}
{RAIZ} {
    return RAIZ;
}
{RESTO} {
    return RESTO;
}
{ELEVACAO} {
    return ELEVACAO;
}
{ENTRADA} {printf("Entrada: %s\n", yytext);}
{SAIDA} {printf("Saída: %s\n", yytext);}
{SENAO} {printf("Se não: %s\n", yytext);}
{SE} {printf("Se: %s\n", yytext);}
{PARA} {printf("Para: %s\n", yytext);}
{ENQUANTO} {printf("Enquanto: %s\n", yytext);}
{ESCOLHER} {printf("Escolher: %s\n", yytext);}
{CASO} {printf("Caso: %s\n", yytext);}
{PONTO} {printf("Ponto: %s\n", yytext);}
{PARENTESEABERTO} {
    return PARENTESEABERTO;
}
{PARENTESEFECHADO} {
    return PARENTESEFECHADO;
}
{COMENTARIO} {printf("Comentário: %s\n", yytext);}
{COMENTARIOABERTO} {printf("Comentário aberto: %s\n", yytext);}
{COMENTARIOFECHADO} {printf("Comentário fechado: %s\n", yytext);}
{FIM} {
    return FIM;
}
{DIVISAO} {
    return DIVISAO;
}
%%