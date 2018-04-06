#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
Em seguida, atrav�s de um la�o while, pede ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
Por fim, o programa deve mostrar a m�dia, aritm�tica, da turma.*/

/* Para resolver este exerc�cio, vamos precisar de v�rias vari�veis de apoio.
A vari�vel 'total' vai receber o n�mero total de alunos em uma sala.
A vari�vel 'count' ser� a que vai mudar dentro do la�o WHILE. E ela come�a do primeiro aluno e termina no �ltimo.
A cada itera��o do la�o while, pedimos uma nota, que � somada a vari�vel do tipo float 'soma'.
A m�dia aritm�tica � dada por essa soma (de todas as notas), dividida pelo n�mero de alunos na sala.
Assim, nosso programa em C fica:*/


main()
{
	int total;       /*numero total dos alunos em sala*/
	int count = 0;   /*variavel generica que ira mudar dentro do la�o*/
	float soma = 0.0;      /*notas s�o somadas e adcionadas a essa variavel*/   
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

