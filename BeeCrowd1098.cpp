#include<stdio.h>

int main()
{
	int cont;
	float i, j;
	
	for(cont = 0; cont <= 10; cont++)
	{
		i = cont * 0.2;
		for(j = 1; j <= 3; j++)
			if(cont % 5 == 0)
				printf("I=%.0f J=%.0f\n", i, j+i);
			else
				printf("I=%.1f J=%.1f\n", i, j+i);
	}	
	return 0;
}
