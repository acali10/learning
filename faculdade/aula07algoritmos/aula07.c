#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, contador;

    printf("--- TABUADA ---\n");
    printf("Digite um número inteiro entre 1 e 10: ");
    scanf(" %d", &numero);

    if ((numero >= 1) && (numero <= 10)){
        for (contador = 1; contador <= 10; contador++) {
            printf("%d x %d = %d\n", numero, contador, numero * contador);
        }
    } else {
        printf("O número digitado não está entre 1 e 10");
    }
}
