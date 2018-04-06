#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor*/

main()
{
	int val1;
	int val2;
	
	printf("Este programa mostra qual dos numeros e maior que o outro ");
	
	printf("\n\nInsira o primeiro numero: ");
	scanf("%d",&val1);
	
	printf("\nInsira o segundo numero: ");
	scanf("%d",&val2);
	
	if( val1 > val2 )
	{
		printf("\nO maior valor e: %d",val1);
		
		printf("\nO menor valor e: %d",val2);	
		
	}
	else
	{
		printf("\nO maior valor e: %d",val2);
		
		printf("\nO menor valor e: %d",val1);
	}
	
	return 0;
	
	
}
