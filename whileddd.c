#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Achar o maior, menor, m�dia e organizar n�meros ou seq��ncias s�o os algoritmos mais importantes e estudados em Computa��o. Em C n�o poderia ser diferente.
Em nosso curso, obviamente, tamb�m n�o ser� diferente.*/

/*Escreva um programa em C que solicita 10 n�meros ao usu�rio, atrav�s de um la�o while, e ao final
mostre qual destes n�meros � o maior.*/

main()
{
	int count = 1;
	int maior = 0;
	int num;
	
	printf("Este programa mostra qual o maior entre 10 numeros digitados");
	
	while(count <= 10)
	{
		printf("\ninsira o valor: ");
		scanf("%d",&num);
		
		if( num > maior)
		{
			maior = num;
		}
		count++;
	}
	
	printf("\nO maior numero eh: %d",maior);
	
}
