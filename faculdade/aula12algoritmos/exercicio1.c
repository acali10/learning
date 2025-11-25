#include <stdio.h>
#include <stdlib.h>	
#include <locale.h>

int main (){

	setlocale(LC_ALL, "Portuguese");

	//variáveis
	char palavra[100];
	FILE *arquivo;

	//leitura da palavra
	scanf("%s", palavra);

	//escrevendo em arquivo
	arquivo = fopen("arq.txt", "w");
	fprintf(arquivo, "%s", palavra);
	fclose(arquivo);


	return 0;
}