#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*0. Programa em C dos patinhos da Xuxa Xuxa, a rainha dos baixinhos, criou uma m�sica que tem o seguinte formato:

n patinhos foram passear
Al�m das montanhas
Para brincar
A mam�e gritou: Qu�, qu�, qu�, qu�
Mas s� n-1 patinhos voltaram de l�.

Que se repete at� nenhum patinho voltar de l�.
Ao final, todos os patinhos voltam:

A mam�e patinha foi procurar
Al�m das montanhas
Na beira do mar
A mam�e gritou: Qu�, qu�, qu�, qu�
E os n patinhos voltaram de l�.*/


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
	
	/*A mam�e patinha foi procurar
Al�m das montanhas
Na beira do mar
A mam�e gritou: Qu�, qu�, qu�, qu�
E os n patinhos voltaram de l�.*/

	printf("\nA mamae patinha foi procurar");
	printf("\nAlem das montanhas");
	printf("\nNa beira do mar");
	printf("\nA mamae gritou: Qua, qua, qua, qua ");
	printf("\nE os %d patinhos voltaram de la\n",duck);
	
	
	
	
	
	

	
	
}
