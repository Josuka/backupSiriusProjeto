#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
char resp,inicio;
char cert='s';
char nome[40];
int medio=0,facil=0,dificil=0,cont=0,nivel;
int certo_1=0,errado_1=0,contp_1=1,totp_1=1;
int certo_2=0,errado_2=0,contp_2=1,totp_2=1;
int certo_3=0,errado_3=0,contp_3=1,totp_3=1;
printf ("\nInforme o nome do participante e em seguida pressione \"enter\".\n\n");
printf ("\nNOME DO PARTICIPANTE: ");
//gets(nome);
system("cls");
printf ("\nSEJA BEM VINDO \"%s\"\n",nome);
printf ("-------------------------------------------------------------------------------\n");
printf ("Este e um jogo divertido de perguntas e respostas. O jogador devera escolher\n");
printf ("dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
printf ("O jogo possui 3 niveis de dificuldade:\n\n");
printf ("Nivel facil   - Cada resposta certa valera 2 pontos\n");
printf ("Nivel medio   - Cada resposta certa valera 4 pontos\n");
printf ("Nivel dificil - Cada resposta certa valera 6 pontos\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Boa sorte e bom jogo\n\n");
printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
dificuldade:
printf ("*-----------------------------*\n");
printf ("|	NIVEIS DE DIFICULDADE	|\n");
printf ("*-----------------------------*\n");
printf ("|  1 - NIVEL FACIL			|\n");
printf ("|  2 - NIVEL MEDIO			|\n");
printf ("|  3 - NIVEL DIFICIL		  |\n");
printf ("*-----------------------------*\n");
printf ("DESEJA JOGAR EM QUAL NIVEL? \n");
scanf ("%d",&nivel);
system("cls");
switch (nivel)
{
case 1 :
{
system("cls");
time_t tempo;struct tm *data;time(&tempo);
data = localtime(&tempo);
printf("*=============================================================================*\n");
printf("|___   ___ ___ ___	___ _________    ___									 |\n");
printf("|XXX_  XXX XXX XXX	 XXX   XXXXXXXx  XXX									 |\n");
printf("|XXXX_ XXX XXX XXX	 XXX   XXXXXXXx  XXX									 |\n");
printf("|XXXXX XXX XXX XXX   XXX   XXX____   XXX									 |\n");
printf("|XXXXXXXXX XXX  XXX__XXX   XXXXXXX   XXX									 |\n");
printf("|XXX XXXXX XXX   XXXXXX    XXX______ XXX______							   |\n");
printf("|XXX  XXXX XXX    XXXX     XXXXXXXXX XXXXXXXXX							   |\n");
printf("|XXX   XXX XXx     XX	   XXXXXXXXX XXXXXXXXX							   |\n");
printf("|_________ _________ _________  ___  ___		|\n");
printf("|XXXXXXXXX XXXXXXXXX XXXXXXXXX  XXX  XXX		|\n");
printf("|XXXXXXXXX XXXXXXXXX XXXXXXXXX  XXX  XXX		|\n");
printf("|XXX___	   XXX___XXX XXX	    XXX  XXX		|\n");
printf("|XXXXXX	   XXXXXXXXX XXX	    XXX  XXX		|\n");
printf("|XXXXXX	   XXXXXXXXX XXX______  XXX  XXX______  |\n");
printf("|XXX	   XXX   XXX XXXXXXXXX  XXX  XXXXXXXXX  |\n");
printf("|XXX	   XXX   XXX XXXXXXXXX  XXX  XXXXXXXXX  |\n");
printf("|																			 |\n");
printf("*=============================================================================*\n\n");
printf("			  AS PERGUNSTAS DE NIVEL \"FACIL\" VALEM 2 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("QUAL O MAIOR PLANETA DO SISTEMA SOLAR?\n");
printf ("A) MERCÚRIO\n");
printf (" B) LUA\n");
printf ("C) JÚPITER\n");
printf ("D) MARTE\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("DIGITE A ALTERNATIVA QUE INDICA A POSIÇÃO CORRETA DE JÚPITER NO SISTEMA SOLAR A PARTIR DO SOL?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A)SENGUDO PLANETA DO SISTEMA SOLAR	\n");
printf (" B) SEXTO PLANETA DO SISTEMA SOLAR\n");
printf ("C) QUINTO PLANETA DO SISTEMA SOLAR \n");
printf ("D) TERCEIRO PLANETA DO SISTEMA SOLAR \n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("O QUE SIGNIFICA O MOVIMENTO DE ROTAÇÃO REFERENTE AOS PLANETAS?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) ROTAÇÃO EM TORNO DO SOL \n");
printf (" B) MOVIMENTO  EM TORNO DO SEU PRÓPRIO EIXO \n");
printf ("C) ROTAÇÃO É UM MOVIMENTO QUE LEVA ANOS \n");
printf ("D) A ROTAÇÃO É FEITA EM TORNO DE TRÊS DIAS ATÉ ENCONTRAR O EIXO \n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='b')||(resp=='B'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"B\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Facil  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("QUAL O MENOR PLANETA DO SISTEMA SOLAR?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) MERCÚRIO\n");
printf (" B) PLUTÃO\n");
printf ("C) VÂNUS\n");
printf ("D) NETUNO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_1++;
}


printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_1=contp_1;
contp_1=1;
goto dificuldade;
}
break;
}

/*Inicio do nível médiio*/

case 2:
{
system("cls");
printf("*=============================================================================*\n");
printf("|  ___   ___  ___  ___	___  _________  ___								 |\n");
printf("|  XXX_  XXX  XXX  XXX	XXX  XXXXXXXXX  XXX								 |\n");
printf("|  XXXX_ XXX  XXX  XXX	XXX  XXXXXXXXX  XXX								 |\n");
printf("|  XXXXX_XXX  XXX  XXX_  XXX XXX____	XXX								 |\n");
printf("|  XXXXXXXXX  XXX  XXX__XXX  XXXXXXX	XXX								 |\n");
printf("|  XXX XXXXX  XXX   XXXXXX	 XXX______  XXX______						   |\n");
printf("|  XXX  XXXX  XXX	 XXXX	 XXXXXXXXX  XXXXXXXXX						   |\n");
printf("|  XXX   XXX  XXX	  XX	 XXXXXXXXX  XXXXXXXXX						   |\n");
printf("|						  ___	 ___  _________  ________   ___  _________  |\n");
printf("|						  XXX_   _XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX  |\n");
printf("|						  XXXX_ _XXXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
printf("|						  XXXXX_XXXXX  XXX____	  XXX   XXX  XXX  XXX   XXX  |\n");
printf("|						  XXX XXX XXX  XXXXXXX	  XXX	XX   XXX  XXX   XXX  |\n");
printf("|						  XXX  X  XXX  XXX______  XXX___XXX  XXX  XXX___XXX  |\n");
printf("|						  XXX	  XXX  XXXXXXXXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
printf("|						  XXX	  XXX  XXXXXXXXX  XXXXXXXX   XXX  XXXXXXXXX  |\n");
printf("|																			 |\n");
printf("*=============================================================================*\n\n");
printf ("			  AS PERGUNSTAS DE NIVEL \"MEDIO\" VALEM 4 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("*--------------------------------*\n\n");
printf ("QUAL E O SATELITE NATURAL DA TERRA?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) SPUTNICK\n");
printf (" B) RUBLE\n");
printf ("C) SOYUS\n");
printf ("D) LUA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("*--------------------------------*\n\n");
printf ("QUAL O PLANETA MAIS QUENTE?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) SOL\n");
printf (" B) MERCÚRIO\n");
printf ("C) JÙPITER\n");
printf ("D) VENUS\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("*--------------------------------*\n\n");
printf (" QUAIS SÂO OS PLANETAS QUE NÃO TÊM DIA E NOITE?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) MERCÙRIO\n");
printf (" B) URANO\n");
printf ("C)  NETUNO\n");
printf ("D) SATURNO\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_2++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Medio  |\n",contp_2++);
printf ("*--------------------------------*\n\n");
printf ("ASSINALE A ALTERNATIVA QUE INDICA APENAS OS PLANETAS ROCHOSOS DO SISTEMA SOLAR:\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) TERRA, VÊNUS, URANO E NETUNO\n");
printf (" B) MARTE, TERRA, SATURNO E MERCÙRIO\n");
printf ("C) VÊNUS, MARTE, PLUTÂO E Urano\n");
printf ("D) MERCÙRIO, VÊNUS, TERRA E MARTE\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_2++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_2++;
}

printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_2=contp_2;
contp_2=1;
goto dificuldade;
}
break;
}

/* Inicio do nível difícil */

case 3 :
{
system("CLS");
printf("*=============================================================================*\n");
printf("|  ___   ___  ___  ___	___  _________  ___								 |\n");
printf("|  XXX_  XXX  XXX  XXX	XXX  XXXXXXXXX  XXX								 |\n");
printf("|  XXXX_ XXX  XXX  XXX	XXX  XXXXXXXXX  XXX								 |\n");
printf("|  XXXXX_XXX  XXX  XXX__XXX  XXX____	XXX								 |\n");
printf("|  XXXXXXXXX  XXX  XXX  XXX  XXXXXXX	XXX								 |\n");
printf("|  XXX XXXXX  XXX	XXXXXX	 XXX______  XXX______						   |\n");
printf("|  XXX  XXXX  XXX	 XXXX	 XXXXXXXXX  XXXXXXXXX						   |\n");
printf("|  XXX   XXX  XXX	  XX	 XXXXXXXXX  XXXXXXXXX						   |\n");
printf("|				  ________   ___  _________  ___  _________  ___  ___		|\n");
printf("|				  XXXXXXXX   XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX		|\n");
printf("|				  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXXXXXXXX  XXX  XXX		|\n");
printf("|				  XXX   XXX  XXX  XXX___	 XXX  XXX		 XXX  XXX		|\n");
printf("|				  XXX	XX   XXX  XXXXXX	 XXX  XXX		 XXX  XXX		|\n");
printf("|				  XXX___XXX  XXX  XXXXXX	 XXX  XXX______  XXX  XXX______  |\n");
printf("|				  XXXXXXXXX  XXX  XXX		 XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
printf("|				  XXXXXXXX   XXX  XXX		 XXX  XXXXXXXXX  XXX  XXXXXXXXX  |\n");
printf("|																			 |\n");
printf("*=============================================================================*\n\n");
printf ("			AS PERGUNSTAS DE NIVEL \"DIFICIL\" VALEM 6 PONTOS CADA\n\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("*----------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("*----------------------------------*\n\n");
printf ("QUAIS SÃO OS 4 PLANETAS QUE POSSUEM ANÉIS?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) JÚPITER, SATURNO, URANO E NETUNO \n");
printf (" B) JÚPITER,TERRA, URANO E MARTE \n");
printf ("C) JÚPITER, MERCÚRIO, URANO E NETUNO \\n");
printf ("D) JÚPITER, MERCÚRIO, URANO E TERRA\\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("*----------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("*----------------------------------*\n\n");
printf ("QUEM FOI O INVENTOR DO FOGUETE ESPACIAL DE COMBUSTÍVEL?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) ROBERT HITCHYEN\n");
printf (" B) ROBERT FELLEN\n");
printf ("C)ROBERT HUTCHINGS\n");
printf ("D) ROBERT ROSWELL\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("*----------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("*----------------------------------*\n\n");
printf ("ROBERT HUTCHINGS ERA MUITO INTERESSADO EM ?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) FÍSICA E E TECNOLOGIA\n");
printf (" B)FÍSICA E QUÍMICA\n");
printf ("C) TECNOLOGIA E QUÍMICA\n");
printf ("D) QUMICA E BIOLOGIA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"A\"\n");
errado_3++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("*----------------------------------*\n");
printf ("|  Pergunta n. %.2d - Nivel Dificil  |\n",contp_3++);
printf ("*----------------------------------*\n\n");
printf ("QUAL DESTES É UM PLANETA ANÃO?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) PIAZZI\n");
printf (" B) HUBBLE\n");
printf ("C) HAUMEA\n");
printf ("D)ROMEA\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_3++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_3++;
}

printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
printf ("As pergunstas deste nivel terminaram.\n");
printf ("Deseja jogar em outro nivel (s/n)? ");
scanf ("%s",&resp);
if ((resp=='s')||(resp=='S'))
{
system ("cls");
totp_3=contp_3;
contp_3=1;
goto dificuldade;
}
break;
}
default : printf ("Nivel invalido\n");
{
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls");
goto dificuldade;
}

}/*fechamento do 1º swhith*/

system("cls");
printf ("================ RESULTADOS DO JOGO =================\n");
printf ("Participante: %s\n",nome);
printf ("Perguntas respondidas: %d\n",totp_1-1+contp_1-1+totp_2-1+contp_2-1+totp_3-1+contp_3-1);
printf ("Total de acertos.....: %d\n",certo_1+certo_2+certo_3);
printf ("Total de erros.......: %d\n",errado_1+errado_2+errado_3);
printf ("Pontuacao total......: %d\n\n",(certo_1*2)+(certo_2*4)+(certo_3*6));
printf ("--------------------- NIVEL FACIL -------------------\n");
printf ("Perguntas respondidas: %d\n",contp_1-1+totp_1-1);
printf ("Acertos..: %d\n",certo_1);
printf ("Erros....: %d\n",errado_1);
printf ("Pontuacao: %d\n\n",certo_1*2);
printf ("-------------------- NIVEL MEDIO --------------------\n");
printf ("Perguntas respondidas: %d\n",contp_2-1+totp_2-1);
printf ("Acertos..: %d\n",certo_2);
printf ("Erros....: %d\n",errado_2);
printf ("Pontuacao: %d\n\n",certo_2*4);
printf ("------------------- NIVEL DIFICIL -------------------\n");
printf ("Perguntas respondidas: %d\n",contp_3-1+totp_3-1);
printf ("Acertos..: %d\n",certo_3);
printf ("Erros....: %d\n",errado_3);
printf ("Pontuacao: %d\n",certo_3*6);
getchar();
getchar();
}




