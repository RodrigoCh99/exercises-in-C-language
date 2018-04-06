#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*3. Escreva um programa que pergunte o raio de uma circunferência, e sem seguida mostre o diâmetro, comprimento e área da circunferência.*/
main()
{
	float raio;
	
	printf("Eu consigo te dizer o diametro o comprimento e a area da cicunferencia se for informado o raio , quer ver?\n");
	
	printf("Informe o raio da circunferencia: ");
	scanf("%f",&raio);
	
	printf("\nO diametro e: %.2f", 2 * raio );
	
	printf("\nO comprimento e: %.2f", 2 * 3.14 * raio);
	
	printf("\nA area e: %.2f", 3.14 * raio * raio );
	
	
}
