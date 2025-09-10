#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2;
    char operador;

    printf("Calculadora Básica\n");
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o sinal da operação desejada: ");
    scanf(" %c", &operador);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);

    switch (operador) {
        case '+':
            printf("A soma dos números é %.1f", numero1 + numero2);
            break;
        case '-':
            printf("A subtração dos números é %.1f", numero1 - numero2);
            break;
        case '*':
            printf("A multiplicação dos números é %.1f", numero1 * numero2);
            break;
        case '/':
            if (numero2 != 0) {
                printf("A divisão dos números é %.1f", numero1 / numero2);
            } else {
                printf("Não é possível dividir por zero");
            }
            break;
        default:
            printf("Sinal da operação não identificada");
            break;
    }
}
