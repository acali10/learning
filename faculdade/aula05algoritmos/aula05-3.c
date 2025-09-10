#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char aluno[50], disciplina[50];
    char questao1, questao2, questao3;
    int contador;

    printf("Nome do Aluno: ");
    scanf("%s", &aluno);
    printf("Nome da Disciplina: ");
    scanf("%s", &disciplina);
    printf("Questão 1: 2x3 é igual a?\n A) 3\n B) 6\n C) 4\n D) 8\n E) 12\nResposta: ");
    scanf(" %c", &questao1);
    printf("Questão 2: 4+4 é igual a?\n A) 16\n B) 4\n C) 8\n D) 12\n E) 20\nResposta: ");
    scanf(" %c", &questao2);
    printf("Questão 3: 8-3 é igual a?\n A) -3\n B) 4\n C) -5\n D) 13\n E) 5\nResposta: ");
    scanf(" %c", &questao3);

    // Condicionais
    if ((questao1 == 'B') || (questao1 == 'b')){
        contador++;
    }
    if ((questao2 == 'C') || (questao2 == 'c')){
        contador++;
    }
    if ((questao3 == 'E') || (questao3 == 'e')){
        contador++;
    }

    printf("O aluno %s acertou %d questões na disciplina de %s", aluno, contador, disciplina);
}
