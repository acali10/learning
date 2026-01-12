#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Bloco de Subprogramas
void conversorCentimetros(float *valor)
{
    // Conversão
    *valor *= 100;
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float medida;

    // Entrada
    printf("Digite o valor em metros: ");
    scanf("%f", &medida);

    // Subprograma com Ponteiros
    conversorCentimetros(&medida);

    // Sa�da
    printf("O valor convertido é %.0f centímetros", medida);
}
