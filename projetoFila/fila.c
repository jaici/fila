#include "fila.h"
/**
 * \author	Jaicimara Weber
 * \date	04/05/2015
 * \brief   Função que aloca espaço para fila.
 * \param   void
 * \return  Fila*
 */
Fila* cria (void)
{
    Fila* fila = (Fila*) malloc(sizeof(Fila)); /** Aloca espaço na memória **/
    fila->inicio = fila->fim = 0;              /** Inicializa os ponteiros em vazio **/
    return fila;                               /** Retorna fila criada **/
}
/**
 * \author	Jaicimara Weber
 * \date	08/05/2015
 * \brief   Função que aloca espaço para fila.
 * \param   Fila*, float
 */
void insere (Fila* f, float v)
{
    if(incr(f->fim) == f->inicio){
        printf("Capacidade da fila estourou.\n");
        exit(1);    /*aborta programa*/
    }

    f->vetor[f->fim] = v; /**INSERE ELEMENTO NA PROXIMA POSICAO LIVRE**/
    f->fim = incr(f->fim);  /**INCREMENTA PROXIMA POSICAO**/
}
/**
 * \author	Jaicimara Weber
 * \date	08/05/2015
 * \brief   Função que aloca espaço para fila.
 * \param   Fila*
 * \return  float
 */
float retira (Fila* f)
{
    float valor;

    if(vazia(f)){
        printf("Fila vazia.\n");
        exit(1);
    }
    valor =  f->vetor[f->inicio]; /**CARREGA VALOR DO INICIO DA FILA**/
    f->inicio = incr(f->inicio); /**INCREMENTA INDICE DO INICIO DA FILA**/
    return valor;
}

/**
 * \author	Jaicimara Weber
 * \date	08/05/2015
 * \brief   Verifica se lista está vazia
 * \param   Fila*
 * \return  boolean
 */
int vazia (Fila* f)
{
    return (f->inicio == f->fim);
}

/**
 * \author	Jaicimara Weber
 * \date	08/05/2015
 * \brief   Verifica se lista está vazia
 * \param   Fila*
 */
void libera (Fila* f)
{
    free(f);
}

/**
 * \author	Jaicimara Weber
 * \date	08/05/2015
 * \brief   incrementa ponteiro da fila
 * \param   int
 * \return  int i+1
 */
int incr(int i)
{
    return (int)(i+1)% MAX_FILA;
}




