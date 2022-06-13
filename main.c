#include "MinhaBiblioteca.h"
#include <stdio.h>

int main(void)
{
    //declarando as variaveis
    int cont;
    artPonteiro pntr;

    //chama a função para ler as entradas do usuario
    lerMsg(&pntr);

    //chama a função que troca os caracteres e retorna o contador
    cont = trocaCar(&pntr);

    //mostrar resultado
    printf("\n%s\n%s\n%d\n", pntr.msg_antes , pntr.msg_depois, cont);

    return 0;
}
