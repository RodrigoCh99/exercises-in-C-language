#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste condicional if.*/
int main()
{
	int num;
	
	printf("Eu sei se os numeors sao pares ou impares quer ver?\n");
	printf("\ndigite um numero inteiro: ");
	scanf("%d",&num);
	
	if(num % 2 == 0 )
	{
		printf("\nO numero informado eh par!");
	}
	else
	{
		printf("\nO numero informado eh impar");
	}
	return 0;
}
