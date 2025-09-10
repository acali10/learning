#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura;

    printf("Cálculo de área\n");
    printf("Digite a base do retângulo: ");
    scanf("%d", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%d", &altura);

    if ((base > 0) && (altura > 0)) {
        printf("A área do retângulo é %d", base * altura);
    } else {
        printf("A base e a altura não podem ser iguais a zero");
    }

}
