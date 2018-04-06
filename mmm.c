#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1. Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.


/*Essa é bem simples. Basta percorrermos os números de 1 até 100, e fazer um teste condicional IF dentro do laço WHILE, para exibir somente aqueles números que são ímpares
ou seja, aqueles números que deixam resto 1 quando divididos por 2 */

main()
{
	int num = 1;
	
	while( num < 100 )
	{
		if ( num % 2 == 1 );
		printf("%d\n", num);
		num ++;
	}
}

