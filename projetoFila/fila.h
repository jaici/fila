#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
/** DEFINE TAMANHO MÁXIMO DA FILA **/
#define N 100

/** ESTRUTURA DA FILA - usando vetor **/
typedef struct fila Fila;

struct fila{
    int *fist;
    int *last;
    float vetor[N];
};


#endif // FILA_H_INCLUDED
