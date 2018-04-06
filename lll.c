#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*0. Programa em C dos patinhos da Xuxa Xuxa, a rainha dos baixinhos, criou uma música que tem o seguinte formato:

n patinhos foram passear
Além das montanhas
Para brincar
A mamãe gritou: Quá, quá, quá, quá
Mas só n-1 patinhos voltaram de lá.

Que se repete até nenhum patinho voltar de lá.
Ao final, todos os patinhos voltam:

A mamãe patinha foi procurar
Além das montanhas
Na beira do mar
A mamãe gritou: Quá, quá, quá, quá
E os n patinhos voltaram de lá.*/


main()
{
	int duck;
	int count;
	
	printf("Programa em C dos patinhos da Xuxa!");
	printf("\nQuantos patinhos a mamae pata tem? ");
	scanf("%d",&duck);
	
	count = duck;
	
	while( count > 1 )
	{
		printf("\n%d patinhos foram passear",count);
		printf("\nAlem das montanhas");
		printf("\nPara brincar");
		printf("\nA mamae gritou: Qua, qua, qua, qua");
		printf("\nmas so %d patinhos voltaram de la.\n", count - 1);
		count --;	
	}
    
	printf("\n1 patinho foi passear");
	printf("\nAlem das montanhas");
	printf("\nPara brincar");
	printf("\nA mamae gritou: Qua, qua, qua, qua");
	printf("\nMas nenhum patinho voltou de la.\n");
	
	/*A mamãe patinha foi procurar
Além das montanhas
Na beira do mar
A mamãe gritou: Quá, quá, quá, quá
E os n patinhos voltaram de lá.*/

	printf("\nA mamae patinha foi procurar");
	printf("\nAlem das montanhas");
	printf("\nNa beira do mar");
	printf("\nA mamae gritou: Qua, qua, qua, qua ");
	printf("\nE os %d patinhos voltaram de la\n",duck);
	
	
	
	
	
	

	
	
}
