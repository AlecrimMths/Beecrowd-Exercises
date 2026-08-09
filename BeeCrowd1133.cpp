#include<stdio.h>

int main()
{
	int m, n, aux, i;
	
	scanf("%d%d", &m, &n);
	
	if(n < m)
	{
		aux = m;
		m = n;
		n = aux;
	}
	
	for(i = m+1; i < n; i++)
	{
		if(i % 5 == 2 || i % 5 == 3)
			printf("%d\n", i);
	}
	
	return 0;
}
