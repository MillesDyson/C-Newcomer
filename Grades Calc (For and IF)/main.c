#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float nota, numalunos, soma, media, somaturma, mediaturma;
    soma = 0;
    somaturma = 0;
    printf("Digite o numero de alunos da turma: ");
    scanf("%f",&numalunos);

    for (i = 1; i<=numalunos;i++){
        for (j=1; j<=3;j++){
        printf("Digite a nota %d do aluno %d: ",j,i);
        scanf("%f",&nota);
        if (nota <= 10){
        soma = soma + nota;
        }
        else{
        printf("\n");
        printf("Digite uma nota entre 1 a 10!\n");
        printf("\n");
        j--;
        }
        }
        media = soma / 3;
        somaturma = somaturma + media;
        printf("A Media do aluno %d e %0.2f\n",i,media);
        printf("\n");
        soma = 0;
        media = 0;
    }
    mediaturma = somaturma / numalunos;
    printf("\n");

    printf("A Media da turma e %f: ",mediaturma);

    return 0;
}
