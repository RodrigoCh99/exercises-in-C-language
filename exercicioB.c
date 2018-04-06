#include<stdio.h>
#include<stdlib.h>
/*Faça um programa que peça dois números ao usuário e mostre qual o maior e qual o menor*/
main()
{
	int val1;
	int val2;
	
	printf("Eu sei qual numero e maior quer ver? ");
	
	printf("\n\n insira o primeiro numero: ");
	scanf("%d",&val1);
	
	printf("\n\n insira o segundo numero: ");
	scanf("%d",&val2);
	
	if(val1 < val2)
	{
		printf("\nO maior numero e: %d", val2);
	}
	else
	{
		printf("\nO maior numero e: %d", val1);
		
	}
	return 0;
	
}
