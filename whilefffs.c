#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um programa que lê o tamanho do lado de um quadrado e imprime um quadrado daquele tamanho com asteriscos
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.*/

main()
{
	int lado;
    int count = 1;
    
    printf("ESTE PROGRAMA DESENHA UM QUADRADO DE ACORDO COM O VALOR INFORMADO");
    
    printf("\nInforme o valor do lado: ");
    scanf("%d",&lado);
    
    while( count <= lado*lado )
    {
    	if(count%lado == 0)
    	{
    		printf("*\n");
		}
		else
		{
			printf("*");
		}
		count++;
	}
	
}
