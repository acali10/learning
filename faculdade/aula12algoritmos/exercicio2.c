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

    // Abertura do Arquivo
    arquivo = fopen("arquivo.txt", "r");

    // Validação do Arquivo
    if (arquivo == NULL) {
        return 1;
    }

    // Leitura do Arquivo
    fscanf(arquivo, "%s", &palavra);

    // Saída para o Usuário
    printf("A palavra lida do arquivo é: %s", palavra);

    // Fechamento do Arquivo
    fclose(arquivo);
}
