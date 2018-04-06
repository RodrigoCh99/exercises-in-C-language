#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/
main()
{
	int idade;
	
	printf("Quer saber se voce pode ou nao doar sangue? \nEu posso te dizer!");
	
	printf("\n\nInforme sua idade: ");
	scanf("%d",&idade);
	
	if(idade < 18 || idade > 67)
	{
		printf("\nVoce nao pode doar sangue!");
	}
	else
	{
		printf("\nVoce pode doar sangue! ");
	}
	return 0;
}
