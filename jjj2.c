#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*calcule e informe a soma de dois numeros positivos*/
/*entrada 2 valores*/
/*saida 1 valor*/
main()
{
	int val1 = -1;
	int val2 = -1;
	
	printf("Eu posso calcular a soma de dois numeros positivos! , quer ver? ");
	
	while( val1 < 0 || val2 < 0)
	{
		printf("\n\nInforme o valor do primeiro numero: ");
	    scanf("%d",&val1);
	     
	    printf("\n\nInforme o valor do segundo numero: ");
	    scanf("%d",&val2);
	}
	
	printf("\nO resultado da soma dos valors informados e: %d", val1 + val2);
	
	
	
	
	
	
	
	
	
}
