#include <stdio.h>
int main()
{
	int N, A = 1, B= 1, C = 1;
	
	scanf("%d", &N);

	while(A <= N)
	{
		B = A * A;
		C = A * B;
		printf("%d %d %d\n", A, B, C);
		B++;
		C++;
		printf("%d %d %d\n", A, B, C);
		A++;
	}	
	return 0;
}
