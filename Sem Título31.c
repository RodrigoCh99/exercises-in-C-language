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
	scanf("%d",&val1);
	
	if( val1%2 == 1 )
		printf("\n%d e Impar ",val1);
	else
		printf("\n%d e Par ",val1);
	
	
}
