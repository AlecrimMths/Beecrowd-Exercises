#include <stdio.h>

int main()
{
	int N, A = 0, B = 1, C = 0, cont = 2;
	
	scanf("%d", &N);
	printf("%d %d", A, B);
	
	while(cont < N)
	{
		C = A + B;
		printf(" %d", C);
		A = B;
		B = C;
		cont++;
	}
	printf("\n");
	return 0;
}
