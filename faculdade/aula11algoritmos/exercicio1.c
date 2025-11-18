#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	void troca (int *n1, int *n2) {
		int temp;
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}

int main(){

	setlocale(LC_ALL, "Portuguese");

	//variáveis
	int numero1, numero2;

	//entrada
	scanf("%d", &numero1);
	scanf("%d", &numero2);

	//saída
	printf("%d %d", numero1, numero2);

	troca (&numero1, &numero2);

	printf("\n%d %d", numero1, numero2);
}