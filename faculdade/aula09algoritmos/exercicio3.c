#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Bloco de Subprogramas
float media(float vetor[], int qtde)
{
    // Variáveis Locais
    float soma = 0;
    int indice;

    // Cálculo
    for (indice = 0; indice < qtde; indice++) {
        soma += vetor[indice];
    }

    // Retorno
    return soma/qtde;
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float notas[3];
    int indice;

    // Entrada
    printf("--- Calculadora de Notas ---\n");
    for (indice = 0; indice < 3; indice++) {
        printf("Digite a %dª nota: ", indice+1);
        scanf("%f", &notas[indice]);
    }

    // Saída
    printf("A média final é %.2f", media(notas,indice));
}
