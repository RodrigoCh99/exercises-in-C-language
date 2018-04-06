#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um aplicativo em C que recebe inteiro e mostra os números pares e ímpares (separados, em duas colunas), de 1 até esse inteiro.*/

main()
{
	int num;
    int count = 1;
    
    printf("Informe o numero: ");
    scanf("%d",&num);
    
    while( count <= num )
    {
    	if( count%2 == 1 )
    	{
    		printf("\n%d",count);
		}
		else
		{
			printf("\t%d",count);
		}
		count++;
	}
    
}

