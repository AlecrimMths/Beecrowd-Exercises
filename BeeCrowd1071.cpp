#include<stdio.h>

int main()
{
	int x, y, aux, i, soma = 0;
	
	scanf("%d%d", &x, &y);
	
	if(y < x)
	{
		aux = y;
		y = x;
		x = aux;
	}
	
	for(i = x+1; i < y; i++)
	{
		if(i % 2 != 0)
			soma += i;
	}
	
	printf("%d\n", soma);
	return 0;
}
