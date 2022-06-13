#include "MinhaBiblioteca.h"
#include "stdio.h"
#include "string.h"


int lerMsg(artPonteiro *tp)
{
    printf("Coloque a mensagem, char inicial e char final:\n");
    scanf("%s %c %c", tp->msg_depois, &tp->inicial, &tp->final);

    strncpy(tp->msg_antes, tp->msg_depois, MAX_SIZE);

    return 0;
}



{
    int cont = 0;

    for (int i = 0; tp->msg_depois[i]; ++i) {
        if (tp->msg_depois[i] == tp->inicial)
        {
            tp->msg_depois[i] = tp->final;
            cont++;
        }
    }
    return cont;
}
