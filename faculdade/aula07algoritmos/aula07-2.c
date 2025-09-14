#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float numero, soma = 0;
    int contador = 0;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%f", &numero);

        if (numero != 0) {
            soma += numero;
            contador++;
        }

    } while (numero != 0);

    if (contador > 0) {
        printf("A média dos números digitados é %.1f", soma/contador);
    } else {
        printf("Nenhum número digitado");
    }
}
