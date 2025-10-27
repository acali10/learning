#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Bloco de Subprogramas
void parImpar(int valor)
{
    // Saída com Condicional
    if (valor % 2 == 0) {
        printf("O número %d é par", valor);
    } else {
        printf("O número %d é ímpar", valor);
    }
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numero;

    // Entrada
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Saída
    parImpar(numero);
}
