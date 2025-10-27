#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Bloco de Subprogramas
void conversorMinutos(int tempo)
{
    // Variáveis Locais
    int horas, minutos;

    // Conversão
    horas = tempo / 60;
    minutos = tempo % 60;

    // Saída
    printf("Tempo em horas: %d:%02d", horas, minutos);
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    int qtde;

    // Entrada
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &qtde);

    // Saída
    conversorMinutos(qtde);
}
