#include<stdio.h>

int main()
{
	int A, B, C, D, E, total = 0;
	
	scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
	
	total += A*300 + B*1500 + C*600 + D*1000 + E*150 + 225;
	printf("%d\n", total);
	
	return 0;
}
