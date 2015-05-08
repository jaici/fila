#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
/**< INCLUSAO DAS BIBLIOTECAS */
#include <stdio.h>
#include <stdlib.h>
/**< DEFINE TAMANHO MÁXIMO DA FILA */
#define MAX_FILA 5

/**< ESTRUTURA DA FILA - usando vetor */
typedef struct fila Fila;

struct fila{
    int inicio;
    int fim;
    float vetor[MAX_FILA];
};
/** FUNÇÕES DE FILA USANDO VETORES **/
Fila* cria (void);
void insere (Fila* f, float v);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
int incr(int i);
#endif // FILA_H_INCLUDED
