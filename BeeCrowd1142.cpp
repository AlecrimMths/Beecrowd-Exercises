#include <stdio.h>

int main()
{
	int N, X = 1, cont = 0, cont2 = 0;
	
	scanf("%d", &N);
	
	while(cont < N)
	{
		while(cont2 < 3)
		{
			printf("%d ", X);
			X++;
			cont2++;
		}
		X++;
		printf("PUM\n");
		cont2 = 0;
		cont++;
	}
	return 0;
}
