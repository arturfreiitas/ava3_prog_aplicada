#ifndef __ARTBIBLIOTECA_H
#define __ARTBIBLIOTECA_H
#define MAX_SIZE 1024

typedef struct
{
    char msg_antes[MAX_SIZE];
    char msg_depois[MAX_SIZE];
    char inicial;
    char final;
} artPonteiro;

//função para ler entrada
int lerMsg(artPonteiro *ponteiro);

//fução que  troca os caracteres
int trocaCar(artPonteiro *ponteiro);

#endif
