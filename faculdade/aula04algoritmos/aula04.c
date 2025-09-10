#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    numero = 456;


    printf("O número atribuído é %d", numero);
}