#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Bloco de Subprogramas
void lerVetor(int vetor[], int max)
{
    // Variáveis Locais
    int indice;

    // Laço de Repetição
    for (indice = 0; indice < max; indice++) {
        printf("Digite um número para a posição %d do vetor: ", indice);
        scanf("%d", &vetor[indice]);
    }
}

void imprimirVetor(int vetor[], int max)
{
    // Variáveis Locais
    int indice;

    // Laço de Repetição
    for (indice = 0; indice < max; indice++) {
        printf("| %d ", vetor[indice]);
    }
    printf("|");
}

void dobraVetor(int *vetor)
{
    // Variáveis
    int indice;

    // Laço de Repetição
    for (indice = 0; indice < 5; indice++) {
        vetor[indice] *= 2;
    }
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numeros[5];

    // Entrada
    lerVetor(numeros, 5);

    // Saída Antes do Subprograma
    printf("\n----- Antes -----\n");
    imprimirVetor(numeros, 5);

    // Subprograma com Ponteiros
    dobraVetor(&numeros);

    // Saída Depois do Subprograma
    printf("\n----- Depois -----\n");
    imprimirVetor(numeros, 5);
}
