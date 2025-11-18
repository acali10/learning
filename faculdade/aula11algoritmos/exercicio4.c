#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//exibir o status 
	void exibir(int *sensores){
	printf("--- Status dos Sensores ---\n");
	for(int i = 0; i < 5; i++){
		if(sensores[i] == 1){
			printf("Sensor %d: Ativado\n", i+1);
		} else {
			printf("Sensor %d: Desativado\n", i+1);
		}
	}
}
	//alterar o sensor
	void alterar(int *sensores, int sensor, int estado){
		if (sensor >= 1 && sensor <= 5){
			sensores[sensor - 1] = estado;
			printf("Sensor %d alterado para %s.\n", sensor, estado ? "Ativado" : "Desativado");
		} else {
			printf("Sensor invalido. Escolha entre 1 e 5.\n");
		}
	}

	int main(){

		setlocale(LC_ALL, "Portuguese");

		//variaveis
		int sensores[5] = {0};
		int opcao, sensor, estado;

		printf("--- Sistema de controle de Sensores\n");
		//entrada 
		do{
			printf("\nOpções:\n");
			printf("1. Exibir status dos sensores\n");
			printf("2. Alterar o sensor\n");
			printf("3. Sair\n");
			printf("Escolha uma opção: ");
			scanf("%d", &opcao);

		//saida		

			switch (opcao)
			{
			case 1:
				exibir(sensores);
				break;

			case 2:
				printf("Qual sensor deseja alterar (1-5)? ");
				scanf("%d", &sensor);
				printf("Digite o novo estado (1 para Ativado, 0 para Desativado): ");
				scanf("%d", &estado);

				if(estado == 0 || estado == 1){
					alterar(sensores, sensor, estado);
				} else {
					printf("Estado invalido. Use 1 para Ativado e 0 para Desativado.\n");
				}
				break;

			case 3:
				printf("Saindo do sistema...\n");
				break;
			
			default:
				printf("Opção invalida. Tente novamente.\n");
				break;
			}
		} while (opcao != 3);

		return 0;
}