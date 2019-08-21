/*\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__

  AO PREENCHER ESSE CABEÇALHO COM O MEU NOME E O MEU NÚMERO USP, 
  DECLARO QUE SOU O ÚNICO AUTOR E RESPONSÁVEL POR ESSE PROGRAMA. 
  TODAS AS PARTES ORIGINAIS DESSE EXERCÍCIO PROGRAMA (EP) FORAM 
  DESENVOLVIDAS E IMPLEMENTADAS POR MIM SEGUINDO AS INSTRUÇÕES DESSE EP
  E QUE PORTANTO NÃO CONSTITUEM PLÁGIO. DECLARO TAMBÉM QUE SOU RESPONSÁVEL
  POR TODAS AS CÓPIAS DESSE PROGRAMA E QUE EU NÃO DISTRIBUI OU FACILITEI A
  SUA DISTRIBUIÇÃO. ESTOU CIENTE QUE OS CASOS DE PLÁGIO SÃO PUNIDOS COM 
  REPROVAÇÃO DIRETA NA DISCIPLINA.

  Nome:
  NUSP:

  ep1.c

  Referências: Com exceção das rotinas fornecidas no esqueleto e em sala
  de aula, caso você tenha utilizado alguma refência, liste-as abaixo
  para que o seu programa não seja considerada plágio.
  Exemplo:

  - função randomInteger() de: 

  http://www.ime.usp.br/~pf/algoritmos/aulas/random.html

  \__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__\__*/

/*
 *  Sobre os nomes da variaveis:
 *
 *  Adotamos a especificacao das variaveis em (lower) "camel case":
 * 
 *       http://en.wikipedia.org/wiki/Camel_case
 *
 *  Sobre as especificações das funções:
 *
 *  Nos protótipos das funções, os nomes dos parametros
 *  seguem o padrao camel case. No entanto, nas especificações,
 *  esses nomes aparecem vertidos para maiúsculas para destacar 
 *  o papel de cada parâmetro. Isso corresponde a recomendacao do 
 *  GNU Coding Standards:
 *
 *       http://www.gnu.org/prep/standards/standards.html#Comments
 */

#include <stdio.h>  /* scanf(), printf(), ... */
#include <stdlib.h> /* srand(), rand(), atoi(), exit(), ...  */
#include <string.h> /* strlen(), strcmp(), ... */  

/*---------------------------------------------------------------*/

/* 
 * 0. C O N S T A N T E S 
 */

/* tamanho máximo de um turtledorm */
#define MAX      128

/* estado da turtle */
#define ACORDADO   '#'
#define DORMINDO   ' '
#define TAPINHA    'T'

#define TRUE       1
#define FALSE      0

#define ENTER      '\n'
#define FIM        '\0'
#define ESPACO     ' '

/*---------------------------------------------------------------*/
/*
 * 1. P R O T Ó T I P O S
 */

/* PARTE I */
void
leiaTurtledorm(int *nLin, int *nCol, int tDorm[][MAX]);

void 
mostreTurtledorm(int nLin, int nCol, int tDorm[][MAX], char c);

void
tapinhaTurtle(int nLin, int nCol, int tDorm[][MAX], int lin, int col);

int 
todosDormindo(int nLin, int nCol, int tDorm[][MAX]);

/* PARTE II */
void
sorteieTurtledorm(int *nLin, int *nCol, int tDorm[][MAX]);

int
graveTurtledorm(int nLin, int nCol, int tDorm[][MAX]);

/* PARTE III */
void
resolvaTurtledorm(int nLin, int nCol, int tDorm[][MAX]);

/* FUNÇõES AUXILIARES */
int 
randomInteger(int low, int high);

void 
pause();
/*---------------------------------------------------------------*/

/* 
 *  M A I N 
 */
int 
main(int argc, char *argv[])
{
    return EXIT_SUCCESS;
}


/*---------------------------------------------------------------*/
/* 
 *  I M P L E M E N T A Ç Ã O   D A S   F U N Ç Õ E S   DA  
 *                        P A R T E   I 
 */


/*---------------------------------------------------------------*/
/* 
 *  I M P L E M E N T A Ç Ã O   D A S   F U N Ç Õ E S   DA  
 *                       P A R T E   II 
 */


/*---------------------------------------------------------------*/
/* 
 *  I M P L E M E N T A Ç Ã O   D A S   F U N Ç Õ E S   DA  
 *                       P A R T E   III 
 */

 
/*---------------------------------------------------------------*/
/* 
 *  I M P L E M E N T A Ç Ã O   D A S   F U N Ç Õ E S   DA  
 *                     A U X I L I A R E S 
 */

/* 
 * randomInteger()
 *
 * A função recebe dois inteiros LOW e HIGH e retorna um 
 * inteiro aleatório entre LOW e HIGH inclusive, ou seja, 
 * no intervalo fechado LOW..HIGH.
 *
 * Pré-condição: a função supõe que 0 <= LOW <= HIGH < INT_MAX.
 *     O codigo foi copiado da página de projeto de algoritmos 
 *     de Paulo Feofiloff, que por sua vez diz ter copiado o 
 *     código da biblioteca random de Eric Roberts.
 */
int 
randomInteger(int low, int high)
{
    int k;
    double d;
    d = (double) rand( ) / ((double) RAND_MAX + 1);
    k = d * (high - low + 1);
    return low + k;
}

/* 
 * pause()
 *
 * Para a execucao do programa ate que um ENTER seja digitado.
 */
void 
pause()
{
    char ch;

    printf("Digite ENTER para continuar. ");
    do 
    {
        scanf("%c", &ch);
    }
    while (ch != ENTER);
}

