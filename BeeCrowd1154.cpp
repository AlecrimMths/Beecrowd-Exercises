#include<stdio.h>

int main(void)
{
	int idade = 0, sum = 0, qntd = 0;
	
	do
	{
		sum+=idade;
		qntd++;
		scanf("%d", &idade);
	}while(idade >= 0);
	
	printf("%.2f\n", (float)sum/(qntd-1));
	
	return 0;
}

