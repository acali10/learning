#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");

	//variáveis
	char palavra[100];
	FILE *arquivo;

	//leitura do arquivo
	arquivo = fopen("arq.txt", "r");
	fscanf(arquivo, "%s", &palavra);
	fclose(arquivo);

	//escrita na tela
	printf("%s\n", palavra);


	return 0;
}