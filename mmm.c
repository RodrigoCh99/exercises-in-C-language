#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1. Escreva um aplicativo em C mostra todos os n�meros �mpares de 1 at� 100.


/*Essa � bem simples. Basta percorrermos os n�meros de 1 at� 100, e fazer um teste condicional IF dentro do la�o WHILE, para exibir somente aqueles n�meros que s�o �mpares
ou seja, aqueles n�meros que deixam resto 1 quando divididos por 2 */

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

