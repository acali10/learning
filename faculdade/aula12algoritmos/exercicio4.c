#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Variável Global
FILE *arquivo;

// Bloco de Subprogramas
void lerSensores(int *vetor)
{
    // Variáveis
    int contador;

    // Abertura do Arquivo para Leitura
    arquivo = fopen("sensores.txt", "r");

    // Validção do Arquivo
    if (arquivo == NULL) {
        return 1;
    }

    // Leitura do Arquivo
    for (contador = 0; contador < 5; contador++) {
        fscanf(arquivo, "%d", &vetor[contador]);
    }

    // Fechamento do Arquivo
    fclose(arquivo);
}

void gravarSensores(int *vetor)
{
    // Variáveis
    int contador;

    // Abertura do Arquivo para Gravação
    arquivo = fopen("sensores.txt", "w");

    // Validação do Arquivo
    if (arquivo == NULL) {
        return 1;
    }

    // Escrita do Arquivo
    for (contador = 0; contador < 5; contador++) {
        fprintf(arquivo, "%d\n", vetor[contador]);
    }

    // Fechamento do Arquivo
    fclose(arquivo);
}

void exibirSensores(int *vetor)
{
    // Variáveis
    int contador;

    // Laço de Repetição
    for (contador = 0; contador < 5; contador++) {
        printf("Sensor %d: %d\n", contador+1, vetor[contador]);
    }
}

void alterarSensores(int *vetor, int numero)
{
    // Condicional
    if (vetor[numero-1] == 0) {
        vetor[numero-1] = 1;
    } else {
        vetor[numero-1] = 0;
    }
}

int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int sensores[5], sensornumero, menu, contador;

    // Leitura dos Sensores
    lerSensores(&sensores);

    // Entrada com Laço de Repetição
    do {
        system("cls");
        printf("-------- SENSORES --------\n");
        exibirSensores(&sensores);
        printf("--------------------------\n");
        printf("1 - Alterar status\n");
        printf("2 - Sair\n");
        printf("--------------------------\n");
        printf("Selecione: ");
        scanf("%d", &menu);

        // Menu
        switch (menu) {
            case 1:
                printf("Digite o sensor: ");
                scanf("%d", &sensornumero);
                alterarSensores(&sensores, sensornumero);
                break;
            case 2:
                printf("Sistema encerrado!\n");
                break;
            default:
                printf("Opção de menu inválida!\n");
                break;
        }

    } while (menu != 2);

    // Gravação dos Sensores
    gravarSensores(&sensores);
}
