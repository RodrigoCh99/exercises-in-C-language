#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Achar o maior, menor, média e organizar números ou seqüências são os algoritmos mais importantes e estudados em Computação. Em C não poderia ser diferente.
Em nosso curso, obviamente, também não será diferente.*/

/*Escreva um programa em C que solicita 10 números ao usuário, através de um laço while, e ao final
mostre qual destes números é o maior.*/

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
