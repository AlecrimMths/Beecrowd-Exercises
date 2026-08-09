#include<stdio.h>
#include<string.h>

int main()
{
	int n, x, i;
	char palavra1[25], palavra2[25];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if(x == 0)
			printf("NULL\n");
		else
		{
			if(x > 0)
				strcpy(palavra2, "POSITIVE");
			else
				strcpy(palavra2, "NEGATIVE");
			if(x % 2 == 0)
				strcpy(palavra1, "EVEN");
			else
				strcpy(palavra1, "ODD");
				
			printf("%s %s\n", palavra1, palavra2);
		}
	}
	return 0;
}
