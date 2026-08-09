#include<stdio.h>

int main()
{
	int m, n, aux, soma;
	
	scanf("%d%d", &m, &n);
	while(m > 0 && n > 0)
	{
		soma = 0;
		if(n < m)
		{
			aux = n;
			n = m;
			m = aux;
		}
		for( i = m; i <= n; i++)
		{
			printf("%d ", i);
			soma += i;
		}
		printf("Sum=%d\n", soma);
		scanf("%d%d", &m, &n);
	}
	return 0;
}
