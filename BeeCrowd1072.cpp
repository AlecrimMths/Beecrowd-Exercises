#include<stdio.h>

int main()
{
	int n, x, i, cont_in = 0, cont_out = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if(x >= 10 && x <= 20)
			cont_in++;
		else
			cont_out++;
	}
	
	printf("%d in\n%d out\n", cont_in, cont_out);
	return 0;
}
