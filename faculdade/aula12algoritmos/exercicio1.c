#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    FILE *arquivo;
    char palavra[50];

    // Entrada do Usuário
    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    // Abertura do Arquivo
    arquivo = fopen("arquivo.txt", "w");

    // Validação do Arquivo
    if (arquivo == NULL) {
        return 1;
    }

    // Escrita do Arquivo
    fprintf(arquivo, "%s", palavra);

    // Fechamento do Arquivo
    fclose(arquivo);
}
