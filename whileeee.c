#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final mostre os dois maiores números digitados pelo usuário.*/

main()
{
	int num;
	int count = 3;
	int maior = 0;
	int segundo_maior = 0;
	
    printf("programa em C que solicita 10 numeros ao usuario e ao final mostre os dois maiores números digitados");
    
    printf("\n\nInsira um valor: ");
    scanf("%d",&maior);
    
    printf("\n\nInsira um valor: ");
    scanf("%d",&num);

    if( num > maior )
    {
    	segundo_maior = maior;
    	maior = num;	
	}
	else
	{
		if( num > segundo_maior )
		{
			segundo_maior = num;
		}
	}
	
	while(count <= 10)
	{
		printf("\n\nInsira um valor: ");
		scanf("%d",&num);
		
		if( num > maior)
		{
			segundo_maior = maior;
			maior = num;
		}
		
		count++;
	}
	
	printf("\nO MAIOR NUMERO E: %d",maior);
	printf("\n\nO SEGUNDO MAIOR NUMERO E: %d\n\n",segundo_maior);
	
	
    
	
}
