#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void multiplicador(int *vetor, int tamanho){
	for (int indice = 0; indice < tamanho; indice++) {
		vetor[indice] = vetor [indice] * 2;
	}
}

int main(){

	setlocale(LC_ALL, "Portuguese");

	//variáveis
	int vetor[5];

	//entrada
	printf("Digite 5 números inteiros:\n");
	for (int indice = 0; indice < 5; indice++) {
		printf("Número %d: ", indice + 1);
		scanf("%d", &vetor[indice]);
	}

	//vetor original
	printf("Vetor original:\n");
	for (int indice = 0; indice < 5; indice++) {
		printf("%d ", vetor[indice]);
	}

	//chamada subprograma
	multiplicador(vetor, 5);

	//vetor modificado
	printf("\nVetor após dobrado: ");
	for (int indice = 0; indice < 5; indice++) {
		printf("%d ", vetor[indice]);
	}

	return 0;


}	