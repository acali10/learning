#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Bloco de Subprogramas
void gerarVetor(int vetor[], int max)
{
    // Variáveis Locais
    int indice;

    // Laço de Repetição
    for (indice = 0; indice < max; indice++) {
        vetor[indice] = rand() % 100 + 1;
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

void maiorVetor(int vetor[], int max)
{
    // Variáveis Locais
    int indice, maiornumero = 0, posicaonumero = 0;

    // Laço de Repetição
    for (indice = 0; indice < max; indice++) {
        if (vetor[indice] > maiornumero) {
            maiornumero = vetor[indice];
            posicaonumero = indice;
        }
    }

    // Saída
    printf("\n\nO maior valor encontrado foi %d no índice %d", maiornumero, posicaonumero);
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Inicialização do Rand
    srand(time(NULL));

    // Variáveis
    int numeros[30];

    // Entrada
    gerarVetor(numeros, 30);

    // Saída
    imprimirVetor(numeros, 30);
    maiorVetor(numeros, 30);
}
