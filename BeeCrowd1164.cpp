#include <stdio.h>

int main()
{
	int N, X, cont = 0 , i = 0, soma = 0;
	
	scanf("%d", &N);
	
	while(cont < N)
	{
		scanf("%d", &X);
		i = X - 1;
		while(i != 0)
		{
			if(X % i == 0)
				soma = soma + i;
		
			i--;
		}
		if(soma == X)
			printf("%d eh perfeito\n", X);
		else
			printf("%d nao eh perfeito\n", X);
		soma = 0;
		cont++;
	}
	return 0;
}
