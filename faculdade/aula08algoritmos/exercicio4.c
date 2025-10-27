#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    char vetor[5][20];
    char buscapalavra[20];
    int indice, controle;

    // Entrada do Vetor com Laço de Repetição
    printf("----- VETOR DE 5 PALAVRAS -----\n");
    for (indice = 0; indice < 5; indice++) {
        printf("Digite a %dº palavra: ", indice+1);
        scanf("%s", &vetor[indice]);
    }

    // Laço de Repetição com Comando de Saída
    do {
        controle = 0;

        // Entrada do Nome Buscado
        printf("Digite a palavra que deseja procurar (para encerrar, digite SAIR): ");
        scanf("%s", &buscapalavra);

        // Saída com Laço de Repetição
        if (strcmp(buscapalavra, "SAIR") != 0) {
            for (indice = 0; indice < 5; indice++) {
                if (strcmp(buscapalavra, vetor[indice]) == 0) {
                    printf("A palavra está presente na linha %d do vetor\n", indice);
                } else {
                    controle++;
                }
            }
            if (controle == 5) {
                printf("A palavra não está presente no vetor\n");
            }
        }
    } while (strcmp(buscapalavra, "SAIR") != 0);
}
