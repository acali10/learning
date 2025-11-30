#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Bloco de Subprogramas
void troca(int *num1, int *num2)
{
    // Variáveis
    int temp;

    // Troca dos Numeros
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int numero1, numero2;

    // Entrada
    printf("----- Troca de Números -----\n");
    printf("Digite o 1º número: ");
    scanf("%d", &numero1);
    printf("Digite o 2º número: ");
    scanf("%d", &numero2);

    // Saída Antes da Troca
    printf("\n--- Antes ---\n1º número: %d\n2º número: %d\n", numero1, numero2);

    // Subprograma com Ponteiros
    troca(&numero1, &numero2);

    // Saída Depois da Troca
    printf("\n--- Depois ---\n1º número: %d\n2º número: %d\n", numero1, numero2);
}
