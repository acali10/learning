#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomeFilho[25];
    char sobrenomePai[25];
    char sobrenomeMae[25];

    printf("Digite o nome do filho: ");
    scanf("%s", &nomeFilho);
    printf("Digite o sobrenome do pai: ");
    scanf("%s", &sobrenomePai);
    printf("Digite o sobrenome da mãe: ");
    scanf("%s", &sobrenomeMae);

    printf("O nome completo do filho é %s %s %s", nomeFilho, sobrenomeMae, sobrenomePai);
}