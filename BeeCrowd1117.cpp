#include<stdio.h>

int main()
{
	int cont = 0;
	float nota, result = 0;
	
	scanf("%f", &nota);
	while(cont < 2)
	{
		if(nota >= 0.0 && nota <= 10.0)
		{
			result += nota;
			cont++;
		}
		else
			printf("nota invalida\n");
		
		if(cont < 2)
			scanf("%f", &nota);
	}
	
	result /= cont;
	printf("media = %.2f\n", result);
	return 0;
}
