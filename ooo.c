#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a média, aritmética, da turma.*/

/* Para resolver este exercício, vamos precisar de várias variáveis de apoio.
A variável 'total' vai receber o número total de alunos em uma sala.
A variável 'count' será a que vai mudar dentro do laço WHILE. E ela começa do primeiro aluno e termina no último.
A cada iteração do laço while, pedimos uma nota, que é somada a variável do tipo float 'soma'.
A média aritmética é dada por essa soma (de todas as notas), dividida pelo número de alunos na sala.
Assim, nosso programa em C fica:*/


main()
{
	int total;       /*numero total dos alunos em sala*/
	int count = 0;   /*variavel generica que ira mudar dentro do laço*/
	float soma = 0.0;      /*notas são somadas e adcionadas a essa variavel*/   
	float nota;      /*nota dos alunos para colocar na soma;*/
	
	
	printf("entre com o total de alunos em sala: ");
	scanf("%d",&total);
	
	while( count < total )
	{
		printf("nota do aluno: ",count);
		scanf("%f",&nota);
		soma = soma + nota;
		count++;
	}
	
	printf("%.2f", soma / total );
	return 0;
}

