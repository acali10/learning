#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Bloco de Subprogramas
float volumeCilindro(float h, float d)
{
    // Cálculo com Retorno
    return 3.1415 * pow(d/2,2) * h;
}

// Bloco Principal
int main()
{
    // Idioma
    setlocale(LC_ALL, "Portuguese");

    // Variáveis
    float altura, diametro;

    // Entrada
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o diâmetro do cilindro: ");
    scanf("%f", &diametro);

    // Saída
    printf("O volume do cilindro é %.1f", volumeCilindro(altura, diametro));
}
