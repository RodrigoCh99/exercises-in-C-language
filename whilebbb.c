#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um aplicativo em C que recebe inteiro e mostra os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse inteiro.*/

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

