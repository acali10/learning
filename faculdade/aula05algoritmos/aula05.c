#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("%d é o maior número", numero1);
    } else {
        printf("%d é o maior número", numero2);
    }
}
