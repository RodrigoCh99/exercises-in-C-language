#include<stdlib.h>
#include<math.h>
main()
{
	int a;
	int b;
	int c;
	int delta;
	int x1;
	int x2;
	
	printf("insira um valor interio para A: ");
	scanf("%d",&a);
	
	printf("insira um valor interio para B: ");
	scanf("%d",&b);
	
	printf("insira um valor interio para C: ");
	scanf("%d",&c);
	
	delta = (b * b) - 4 * a * c;
	
	if( delta < 0  )
	{
	
	printf("\nO delta da equacao e negativo , logo ela nao possui raiz! ");
		
	}
	else
	{
		printf("o valor de Delta e: %d",delta);
	
	x1 = ((-b) + sqrt(delta)) / 2 * a;
	
	x2 = ((-b) - sqrt(delta)) / 2 * a;
	
	printf("\nO valor de x' e: %d",x1);
	
	printf("\nO valor de x'' e: %d",x2);
	
	
	return 0;
	}
	
	
}
