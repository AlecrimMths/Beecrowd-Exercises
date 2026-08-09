#include <stdio.h>

int main()
{
	int i = 1, n, res;
	
	scanf("%d", &n);
	
	while(i <= 10)
	{
		res = i * n;
		printf("%d x %d = %d\n", i, n, res);
		i = i + 1;
	}
	
	return 0;
}
