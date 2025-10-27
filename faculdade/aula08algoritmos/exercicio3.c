#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int vetor1[6], vetor2[6];
    int indice;

    // Entrada do Primeiro Vetor por Laço de Repetição
    printf("----- VETOR DE 6 NÚMEROS -----\n");
    for (indice = 0; indice < 6; indice++) {
        printf("Digite o %dº número: ", indice+1);
        scanf("%d", &vetor1[indice]);
    }

    // Armazenamento do Segundo Vetor por LaÇo de Repetição
    for (indice = 0; indice < 6; indice++) {
        vetor2[indice] = vetor1[5 - indice];
    }

    // Saída dos Vetores por Laço de Repetição
    printf("\n----- 1º VETOR DE 6 NÚMEROS -----\n| ");
    for (indice = 0; indice < 6; indice++) {
        printf("%d | ", vetor1[indice]);
    }
    printf("\n\n----- 2º VETOR DE 6 NÚMEROS -----\n| ");
    for (indice = 0; indice < 6; indice++) {
        printf("%d | ", vetor2[indice]);
    }
}
