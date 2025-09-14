#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, divisor, primo;

    printf("Números primos entre 1 e 500\n");
    printf("----------------------------\n");


    for (numero = 1; numero <= 500; numero++) {
        primo = 1;

        for (divisor = 2; divisor < numero; divisor++) {
            if (numero % divisor == 0) {
                primo = 0;
            }
        }

        if (primo == 1) {
            printf("%d ", numero);
        }
    }
}
