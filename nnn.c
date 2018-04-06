#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Escreva um aplicativo em C que recebe inteiro e mostra os números pares e ímpares (separados, em duas colunas), de 1 até esse inteiro.//

/*Como o primeiro número é ímpar (1), os ímpares serão exibidos primeiro. Após cada ímpar damos o espaço de um TAB (\t), e na mesma linha imprimimos o par
e logo em seguinte o caractere new line (\n)*/

main()
{
	int num;
	int cont = 1;
	
	printf("forneca um inteiro: ");
	scanf("%d", &num );
	
	printf("IMPARES \tPARES\n");
	
	while( cont < num )
	{
		if( cont % 2 == 1)
		{
			printf("    %d \t",cont);
		}
		else
		{
			printf("    \t %d\n",cont);
		}
		cont++;
		
	}
	
	
	
	

		
	}
	

