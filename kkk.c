#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*calcule e informe a soma de dois numeros positivos*/
/*entrada 2 valores*/
/*saida 1 valor*/
main()
{
	int val1;
	int val2;
	
	printf("Eu posso calcular a soma de dois numeros positivos! , quer ver? ");
	
	do
	{
	    printf("\n\nInforme o valor do primeiro numero: ");
	    scanf("%d",&val1);
	
	    printf("\nInforme o valor do segundo numero: ");
	    scanf("%d",&val2);		
	}
	
	while( val1 < 0 || val2 < 0);
	
	printf("\nO resultado da soma dos valors informados e: %d", val1 + val2);
	
	
	
	
	
	
	
	
	
}
