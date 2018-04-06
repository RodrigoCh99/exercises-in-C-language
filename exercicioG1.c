#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Escreva um programa que pergunte o dia, mês e ano do aniversário de uma pessoa e diga se a data é válida ou não.*/
/*Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.*/
main()
{
	int dia;
	int mes;
	int ano;
	
	printf("Vamos saber se a sua data de aninversario e valida ou nao?");
	
	printf(" \ninforme o dia do seu aninversario: ");
	scanf("%d",&dia);
	
	printf(" \ninforme o mes do seu aninversario: ");
	scanf("%d",&mes);
	
	printf(" \ninforme o ano do seu aninversario: ");
	scanf("%d",&ano);
	
	if(dia < 1 || dia > 31 )
	{
		printf("\nO dia informado e invalido! ");
	}
	else
	{
		if(mes < 1 || mes > 12 )
		{
			printf("\nO mes informado e invalido! ");
		}
		else
		{
			if(ano > 2013 )
			{
				printf("\nO ano informado e invalido!: ");
			}
			else
			{
				printf("\nA data informada e valida! ");
			}
		}
	}
}
