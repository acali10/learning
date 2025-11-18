#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

	void conversorCm(float *metros){
		*metros = *metros * 100;
	}

int main(){

	setlocale(LC_ALL, "Portuguese");

	//variáveis
	float valorMetros;

	//leitura
	printf("Digite um valor em metros: ");
	scanf("%f", &valorMetros);

	//antes da conversão
	printf("Valor em metros: %.2f m\n", valorMetros);

	conversorCm(&valorMetros);

	//depois da conversão
	printf("Valor convertido em centímetros: %.2f cm\n", valorMetros);

}