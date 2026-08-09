#include<stdio.h>

int main()
{
	int N, fat;
	
	scanf("%d", &N);
	
	fat = N;
	while(N > 1)
	{
		fat *= N - 1;
		N--;	
	}
		
	printf("%d\n", fat);
	return 0;
}
