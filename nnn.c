#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// Escreva um aplicativo em C que recebe inteiro e mostra os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse inteiro.//

/*Como o primeiro n�mero � �mpar (1), os �mpares ser�o exibidos primeiro. Ap�s cada �mpar damos o espa�o de um TAB (\t), e na mesma linha imprimimos o par
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
	

