#include<stdio.h>
#include<stdlib.h>

void Quantidade(int x, int z, int soma, int qntd)
{
	if(soma > z)
		printf("%d\n", qntd);
	else
	{
		soma += x+qntd;
		Quantidade(x, z, soma, ++qntd);
	}		
}

int main(void)
{
	int x, z, i = 1,soma;
	
	scanf("%d", &x);
	
	do
	{
		scanf("%d", &z);
	}while(z<=x);
	
	/*soma = x;
	while(soma <= z)
	{
		soma+=x+i;
		i++;
	}*/
	
	Quantidade(x,z,x,i);
	return 0;
}

