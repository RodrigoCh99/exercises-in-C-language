#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*2. Escreva um programa em C que recebe um inteiro e diga se � par ou �mpar.
Use o operador matem�tico % (resto da divis�o ou m�dulo) e o teste condicional if.*/

main()
{
	int val1;
	
	printf("Este programa diz se um numero e par ou impar ");
	
	printf("\nInforme o valor do numero: ");
	scanf("%d",val1);
	
	if( val1 % 2 == 1 )
	{
		printf("\nO valor informado e impar ");
	}
	else
	{
		printf("\nO valor informado e par");
	}
	
	return 0;
}
