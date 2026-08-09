#include <stdio.h>

int main()
{
	int N, X, nDiv, i;
	
	scanf("%d", &N);
	
	while(N > 0)
	{
		scanf("%d", &X);
		i = 1;
		nDiv = 0;
		while(i <= X && nDiv <= 2)
		{
			if(X % i == 0)
				nDiv++;
			i++;
		}
		if(nDiv == 2)
			printf("%d eh primo\n", X);
		else
			printf("%d nao eh primo\n", X);
		
		N--;
	}
	return 0;
}
