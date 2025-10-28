#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void lerVetor(int vetor[], int tamanho){
	//declaração de variáveis
	int indice;

	//entrada com laço de repetição
	for(indice = 0; indice < tamanho; indice++){
		scanf("%d", &vetor[indice]);
	}
}

void imprimirVetor(int vetor[], int tamanho){
	//declaração de variáveis
	int indice;

	//saída com laço de repetição
	printf("Valores do vetor:\n");
	for(indice = 0; indice < tamanho; indice++){
		printf("%d ", vetor[indice]);
	}
}

int main(){

	//declaração de variáveis
	int tamanho = 20;
	int vetor[tamanho];

	//entrada
	lerVetor(vetor, tamanho);


	//saída
	imprimirVetor(vetor, tamanho);
}