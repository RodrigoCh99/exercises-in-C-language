#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a média, aritmética, da turma.*/

main()
{
	int totalDalunos;
    int count = 1;
    float notas;
    float soma = 0.0;
    
    
    printf("Este programa calcula a media aritmetica da sala");
    
    
    printf("\n\nInforme a quantidade de alunos da sala: ");
    scanf("%d",&totalDalunos);
    
    
    while( count <= totalDalunos )
    {
    	printf("\ninforme a nota do aluno: ");
    	scanf("%f",&notas);
    	soma = soma + notas; 
		count++;	
	}
	
	
	soma = soma / totalDalunos;
	
	
	
	printf("\nA media aritmetca da turma eh: %0.2f",soma);
}
