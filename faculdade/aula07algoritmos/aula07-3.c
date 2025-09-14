#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, contador, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0;

    for (contador = 0; contador < 10; contador++) {

        printf("Digite um número entre 1 e 30: ");
        scanf("%d", &numero);

        if ((numero >= 1) && (numero <= 30)) {
            if (numero <= 10) {
                intervalo1++;
            } else {
                if (numero <= 20) {
                    intervalo2++;
                } else {
                    intervalo3++;
                }
            }
        } else {
            printf("Número fora do intervalo entre 1 e 30\n");
            contador--;
        }

    }

    printf("----------------------------------------------\n");
    printf("Quantidade de Números Digitados nos Intervalos\n");
    printf(" 1 a 10: %d\n", intervalo1);
    printf("11 a 20: %d\n", intervalo2);
    printf("21 a 30: %d\n", intervalo3);
    printf("----------------------------------------------\n");
}
