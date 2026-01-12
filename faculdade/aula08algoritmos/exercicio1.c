#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int vetornumeros[10], indice;

    // Entrada do Vetor por Laço de Repetição
    printf("----- VETOR DE 10 NÚMEROS -----\n");
    for (indice = 0; indice < 10; indice++) {
        printf("Digite o número para a posição %d do vetor: ", indice);
        scanf("%d", &vetornumeros[indice]);
    }

    // Saída do Vetor por Laço de Repetição
    printf("\n----- VETOR DE 10 NÚMEROS -----\n| ");
    for (indice = 0; indice < 10; indice++) {
        printf("%d | ", vetornumeros[indice]);
    }
}
