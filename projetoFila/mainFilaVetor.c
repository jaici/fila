#include "fila.h"

int main()
{
    Fila* teste = cria();

    insere(teste,1);
    insere(teste,2);
    insere(teste,12);
    insere(teste,4);

    printf("Primeiro Elemento %0.2f\n",retira(teste));
    printf("Segundo Elemento %0.2f\n",retira(teste));

    insere(teste,5);
    insere(teste,6);

    printf("Terceiro Elemento %0.2f\n",retira(teste));
    printf("Quarto Elemento %0.2f\n",retira(teste));

    insere(teste,34);
    insere(teste,35);
    insere(teste,35);
    insere(teste,35);
    insere(teste,35);
    insere(teste,35);

    printf("Quinto Elemento %0.2f\n",retira(teste));
    printf("Sexto Elemento %0.2f\n",retira(teste));

    libera(teste);
    return 0;
}
