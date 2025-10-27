#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int vetornumeros[8], indice;

    // Entrada do Vetor por Laço de Repetição
    printf("----- VETOR DE 8 NÚMEROS -----\n");
    for (indice = 0; indice < 8; indice++) {
        printf("Digite o %d� número: ", indice+1);

        // Laço de Repetição com Validação do Número
        do {
            scanf("%d", &vetornumeros[indice]);

            // Condicional para Mensagem ao Usu�rio
            if ((vetornumeros[indice] < 1) || (vetornumeros[indice] > 50)) {
                printf("Número inválido! Digite novamente o %d� n�mero: ", indice+1);
            }

        } while ((vetornumeros[indice] < 1) || (vetornumeros[indice] > 50));
    }

    // Saída do Vetor por Laço de Repetição
    printf("\n----- VETOR DE 8 NÚMEROS -----\n| ");
    for (indice = 0; indice < 8; indice++) {
        printf("%d | ", vetornumeros[indice]);
    }
}
