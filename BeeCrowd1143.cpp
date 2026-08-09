#include<stdio.h>
#include<math.h>
int main()
{
	int N, i, B ,C;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		B = pow(i+1,2);
		C = pow(i+1,3);
		printf("%d %d %d\n", i+1, B, C);
	}
	
	return 0;
}
