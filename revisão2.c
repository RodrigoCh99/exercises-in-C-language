#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Faça um programa que receba três inteiros e diga qual deles é o maior e qual o menor. Consegue criar mais de uma solução?*/

main()
{
	int val1;
	int val2;
	int val3;
	
	printf("Este programa informa qual o valor maior e qual o valor menor informado");
	
	
	printf("\n\nInforme o valor do primeiro numero: ");
	scanf("%d",&val1);
	
	printf("\nInforme o valor do segundo numero: ");
	scanf("%d",&val2);
	
	printf("\nInforme o valor do terceiro numero: ");
	scanf("%d",&val3);
	
	if( val1 > val2 ) 
	{
		if( val1 > val3 )
		{
			printf("\nO maior valor eh: %d",val1);
		}
		   
		else
		{
			printf("\nO maior valor eh: %d",val3); 
		}	     
	}
	else
	{
		if( val2 > val3 )
		{
			printf("\nO maior valor eh: %d",val2);
		}
		else
		{
			printf("\nO maior valor eh: %d",val3);
		}
	}
	
	
	
	if( val1 < val2 )
	{
		if( val1 < val3 )
		{
			printf("\nO menor valor eh: %d",val1);
		}
		else
		{
			printf("\nO  menor valor eh: %d",val3);
		}	
	}
	else
	{
		if( val2 < val3 )
		{
			printf("\nO menor valor eh: %d",val2);
		}
		else
		{
			printf("\nO menor valor eh: %d",val3);
		}
	}
	
	return 0;

}
