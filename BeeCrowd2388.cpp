#include<stdio.h>

int main()
{
	int N, T, V, soma = 0, i;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d%d", &T, &V);
		soma += T * V;
	}
	
	printf("%d\n", soma);
	return 0;
}
