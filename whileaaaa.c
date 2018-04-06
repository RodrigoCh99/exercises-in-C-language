#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.*/

main()
{
	int num = 1;
	
	printf("Este programa mostra os numeros impares de 1 a 100 ");
	
	while( num <= 100 )
	{
		if(num%2 == 1 )
		{
			printf("\n%d",num);
		}
	
	num ++;	
	}
}
