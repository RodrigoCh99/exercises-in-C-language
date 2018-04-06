#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int val1;
	int val2;
	
	printf("Vamos calcular o valor da soma de dois numeros positivos!\n ");
	printf("insira o valor do primeiro numero: ");
	scanf("%d",&val1);
	printf("insira o valor do segundo numero: ");
	scanf("%d",&val2);
	
	if(val1 < 0 || val2 < 0)
	{
		printf("\n\nERRO! \n O VALOR INFORMADO NAO E POSITIVO");
	}
	else
	{
		printf("A soma dos valor informados e: %d ", val1 + val2);
		
	}
	return 0;
}
