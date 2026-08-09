#include<stdio.h>

int main()
{
	int n, x, y, i, j, aux, soma;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		soma = 0;
		scanf("%d%d", &x, &y);
		
		if(y < x)
		{
			aux = y;
			y = x;
			x = aux;
		}
		
		for(j = x+1; j < y; j++)
			if(j % 2 != 0)
				soma += j;
				
		printf("%d\n", soma);	
	}
	return 0;
}
