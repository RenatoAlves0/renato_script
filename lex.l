%{
    
%}
/*VARIAVEIS*/
VAR var
ATRIBUICAO =
NOMEVARIAVEL [A-Za-z]+[0-9A-Za-z]*
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
SAIDA_V saida_v
SAIDA_P saida_p
SAIDAL saidal
SAIDAL_V saidal_v
SAIDAL_P saidal_p
SENAO senao
SE se
PARA para
ENQUANTO enquanto
ESCOLHER escolher
CASO caso
FIM FIM
INICIO INICIO
PONTO \.
VIRGULA \,
ASPA \'
ASPAS \"
ESPACO " "
QUEBRALINHA \n
TABULACAO \t
PARENTESEABERTO "("
PARENTESEFECHADO ")"
CHAVEABERTA "{"
CHAVEFECHADA "}"
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
DESCARTAR ({ESPACO}|{TABULACAO}|{QUEBRALINHA})
%%
{CARACTERES} {
    strcpy(yylval.caracteres, yytext);
    return CARACTERES;
}
{CHAVEABERTA} {return CHAVEABERTA;}
{CHAVEFECHADA} {return CHAVEFECHADA;}
{IGUAL} {return IGUAL;}
{DIFERENTE} {return DIFERENTE;}
{MENORIGUAL} {return MENORIGUAL;}
{MAIORIGUAL} {return MAIORIGUAL;}
{MENOR} {return MENOR;}
{MAIOR} {return MAIOR;}
{SENAO} {return SENAO;}
{SE} {return SE;}
{INICIO} {return INICIO;}
{DECIMAL} {
    yylval.decimal = atof(yytext);
    return DECIMAL;
}
{ENTRADA} {return ENTRADA;}
{SAIDAL_V} {return SAIDAL_V;}
{SAIDAL_P} {return SAIDAL_P;}
{SAIDAL} {return SAIDAL;}
{SAIDA_V} {return SAIDA_V;}
{SAIDA_P} {return SAIDA_P;}
{SAIDA} {return SAIDA;}
{FIM} {return FIM;}
{VAR} {return VAR;}
{E} {return E;}
{OU} {return OU;}
{NOMEVARIAVEL} {
    strcpy(yylval.caracteres, yytext);
    return NOMEVARIAVEL;
}
{ATRIBUICAO} {return ATRIBUICAO;}
{ADICAO} {return ADICAO;}
{SUBTRACAO} {return SUBTRACAO;}
{MULTIPLICACAO} {return MULTIPLICACAO;}
{RAIZ} {return RAIZ;}
{RESTO} {return RESTO;}
{ELEVACAO} {return ELEVACAO;}
{PARENTESEABERTO} {return PARENTESEABERTO;}
{PARENTESEFECHADO} {return PARENTESEFECHADO;}
{DIVISAO} {return DIVISAO;}
{DESCARTAR} {;}
%%