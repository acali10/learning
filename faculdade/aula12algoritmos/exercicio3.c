#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Variáveis Globais
char produto[100];
FILE *arquivo;

// Bloco de Subprogramas
void cadastro()
{
    // Limpeza de Tela
    system("cls");

    // Abertura do Arquivo
    arquivo = fopen("arquivo.txt", "a");

    // Validação do Arquivo
    if (arquivo == NULL) {
        return 1;
    }

    // Entrada
    printf("-------- CADASTRO --------\n");
    printf("Digite o produto a ser cadastrado: ");
    fgets(produto, 100, stdin);
    fprintf(arquivo, "%s", produto);
    printf("Produto cadastrado!\n");

    // Fechamento do Arquivo
    fclose(arquivo);

    // Pausa em Tela e Limpeza de Tela
    printf("\n");
    system("pause");
    system("cls");
}

void lista()
{
    // Variáveis
    int controle;

    // Limpeza de Tela
    system("cls");

    // Abertura do Arquivo
    arquivo = fopen("arquivo.txt", "r");

    // Validação do Arquivo
    if (arquivo == NULL) {
        return 1;
    }

    // Saída por Laço de Repetição
    printf("---- LISTA DE PRODUTOS ---\n");
    do {
        // Limpar a Variável
        strcpy(produto,"");

        fgets(produto, 100, arquivo);
        printf("%s", produto);
    } while (strlen(produto) > 0);

    // Fechamento do Arquivo
    fclose(arquivo);

    // Pausa em Tela e Limpeza de Tela
    printf("\n");
    system("pause");
    system("cls");
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int menu;

    // Entrada com Laço de Repetição
    do {
        printf("---------- MENU ----------\n");
        printf("1 - Cadastrar um produto\n");
        printf("2 - Lista de produtos cadastrados\n");
        printf("3 - Sair\n");
        printf("--------------------------\n");
        printf("Selecione: ");
        scanf("%d", &menu);

        // Limpeza do Armazenamento Temporário (Buffer)
        getchar();

        // Menu
        switch (menu) {
            case 1:
                cadastro();
                break;
            case 2:
                lista();
                break;
            case 3:
                printf("Sistema encerrado!\n");
                break;
            default:
                printf("Opção de menu inválida!\n");
                break;
        }

    } while (menu != 3);
}
