#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variáveis Globais
char produto[250][100];
int registroatual = 0;

// Bloco de Subprogramas
void cadastro()
{
    // Limpeza de Tela
    system("cls");

    // Entrada
    printf("-------- CADASTRO --------\n");
    printf("Digite o produto a ser cadastrado: ");
    fgets(produto[registroatual], 100, stdin);
    registroatual++;
    printf("Produto cadastrado!\n");

    // Pausa em Tela e Limpeza de Tela
    printf("\n");
    system("pause");
    system("cls");
}

void lista()
{
    // Variáveis
    int indice;

    // Limpeza de Tela
    system("cls");

    // Saída por Laço de Repetição
    printf("---- LISTA DE PRODUTOS ---\n");
    for (indice = 0; indice < registroatual; indice++) {
        printf("%s", produto[indice]);
    }

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
