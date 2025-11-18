#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


// Bloco de Subprogramas
void conversor(char entrada[], char saida[])
{
    // Variáveis Locais
    float valor = 0;
    float dolar = 5.76;
    float euro = 6.18;

    // Limpeza de Tela
    system("cls");

    // Entrada e Saída por Condicionais
    printf("---------- CONVERSOR ----------\n");
    if (strcmp(entrada, "real") == 0) {
        printf("Digite o valor em reais: ");
        scanf("%f", &valor);
        if (strcmp(saida, "dolar") == 0) {
            printf("Serão %.2f dolóres", valor*dolar);
        } else {
            printf("Serão %.2f euros", valor*euro);
        }
    } else if (strcmp(entrada, "dolar") == 0) {
        printf("Digite o valor em dólares: ");
        scanf("%f", &valor);
        printf("Serão %.2f reais", valor/dolar);
    } else {
        printf("Digite o valor em euros: ");
        scanf("%f", &valor);
        printf("Serão %.2f reais", valor/euro);
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
        printf("---------- CONVERSOR ----------\n");
        printf("1 - Reais para Dólares\n");
        printf("2 - Dólares para Reais\n");
        printf("3 - Reais para Euros\n");
        printf("4 - Euros para Reais\n");
        printf("5 - Sair\n");
        printf("-------------------------------\n");
        printf("Selecione: ");
        scanf("%d", &menu);

        // Menu
        switch (menu) {
            case 1:
                conversor("real", "dolar");
                break;
            case 2:
                conversor("dolar", "real");
                break;
            case 3:
                conversor("real", "euro");
                break;
            case 4:
                conversor("euro", "real");
                break;
            case 5:
                printf("Sistema encerrado!\n");
                break;
            default:
                printf("Opção de menu inválida!\n");
                break;
        }

    } while (menu != 5);
}
