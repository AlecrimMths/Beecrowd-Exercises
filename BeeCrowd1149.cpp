#include<stdio.h>

int main(void)
{
	int a, n, sum = 0;
	
	scanf("%d", &a);
	do
	{
		scanf("%d", &n);
	}while(n <= 0);


	for(int i = 0; i <= n-1; i++)
		sum += (a + i);
	
	printf("%d\n", sum);
	return 0;
}
