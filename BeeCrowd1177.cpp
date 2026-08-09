#include<stdio.h>
#define TF 1000
int main()
{
	int vet[TF], i, j, T;
	
	scanf("%d", &T);
	
	for(i = 0, j = 0; i < TF; i++, j++)
	{
		if(j >= T)
			j = 0;
			
		vet[i] = j;
	}
	
	for(i = 0; i < TF; i++)
		printf("N[%d] = %d\n", i, vet[i]);

	return 0;
}
