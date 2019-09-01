/* 
 * MAC0121 Algoritmos e Estruturas de Dados
 *
 * Para usar este programa voce deve incluir no final 
 * a sua função mostreTurtledorm.
 *
 * Este programa gera todas as matrizes binarias (de 0s e 1s) 
 * de dimensao nLin x nCol com nLin, nCol <= MAX. 
 * No momento nLin==2 e nCol=3. 
 * 
 * Sobre os nomes da variaveis:
 *
 * Adotamos a especificacao das variaveis em (lower) "camel case":
 * 
 *      http://en.wikipedia.org/wiki/Camel_case
 *
 * Sobre as especificações das funções:
 *
 * Nos protótipos das funções, os nomes dos parametros
 * seguem o padrao camel case. No entanto, nas especificações,
 * esses nomes aparecem vertidos para maiúsculas para destacar 
 * o papel de cada parâmetro. Isso corresponde a recomendacao do 
 * GNU Coding Standards:
 *
 *      http://www.gnu.org/prep/standards/standards.html#Comments
 */

#include <stdio.h> /* printf() */

#define MAX     128
#define TAPINHA 'T'
#define ENTER   '\n'

/* 
 * P R O T O T I P O S   D A S   F U N C O E S
 */ 

void 
mostreTurtledorm(int nLin, int nCol, int tDorm[][MAX], char c);

void
incremente(int bin[]);

void 
pause();

/* 
 * M A I N 
 */ 

int 
main(int argc, char *argv[])
{
    int nLin = 2;           /* inicializacao 'hardcoded' de nLin */
    int nCol = 3;           /* inicializacao 'hardcoded' de nCol */
    /* os valor de nLin e nCol poderiam ser lido  */
    /* coloque outro valores e veja o que o programa faz */

    int bin[MAX*MAX+1];     /* numero binario com nLin*nCol + 1 bits */
    int nBits;              /* numero de bits */
    /* durante o programa nBits == nLin*nCol */

    int tapinhas[MAX][MAX]; /* representacao da lista de tapinhas */
    int i; 
    int j;


    printf("Lista de todas as matriz binarias %d x %d:\n", nLin, nCol);

    /* inicialize bin com zero */
    nBits = nLin*nCol;
    for (i = 0; i < nBits+1; i++)
    {
        bin[i] = 0; 
    } 

    while (bin[nBits] == 0) 
    {
        printf("\nMatriz para: ");
        for (i = nBits; i >= 0; i--)
        {
            printf(" %d", bin[i]);
        }
        printf("\n");
      
        /* transforme os nLin*nCol (== nBits-1) bits menos significativos de 
         * bin em uma matriz binaria de dimensao nLin x nCol
         */
        for (i = 0; i < nLin; i++)
            for (j = 0; j < nCol; j++) 
                tapinhas[i][j] = bin[i*nCol + j];

        /* imprima a matriz de tapinhas */
        mostreTurtledorm(nLin, nCol, tapinhas, TAPINHA);
        pause();

        /* incremente o numero binario em bin */
        incremente(bin);
    }

    return 0;
}

/* 
 * incremente(bin)
 * 
 * Recebe atraves do vetor BIN a representacao de um 
 * número binario k e devolve em BIN a representacao 
 * binaria de k+1.
 * 
 * Pre-condicao: a funcao nao se preocupa com overflow,
 *   ou seja, supoe que k+1 pode ser representado em 
 *   BIN.
 */ 
void
incremente(int bin[])
{
    int i;

    for (i = 0; bin[i] != 0; i++)
        bin[i] = 0;

    bin[i] = 1;
}

/* 
 * pause()
 *
 * Para a execucao ate que um ENTER seja lido.
 */
void 
pause()
{
    char ch;

    printf("Digite ENTER para continuar. ");
    do
       scanf("%c", &ch);
    while (ch != ENTER);
}

void 
mostreTurtledorm(int nLin, int nCol, int tDorm[][MAX], char c)
{       
}


