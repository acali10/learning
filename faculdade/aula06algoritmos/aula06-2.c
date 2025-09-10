#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("--- LAÇO DO WHILE ---\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Sequência de números entre %d e %d:\n", numero1, numero2);
    do {
        printf("%d ", numero1);
        numero1++;
    } while (numero1 <= numero2);
}
