#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char letra;
    int numero;

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("A letra digitada foi %c e o número digitado foi %d", letra, numero);
}
