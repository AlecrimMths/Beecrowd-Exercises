#include<stdio.h>

int main()
{
	int n, i, x, y;
	float result;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		if(y == 0)
			printf("divisao impossivel\n");
		else
		{
			result = (float) x / y;
			printf("%.1f\n", result); 
		}
	}
	
	return 0;
}
