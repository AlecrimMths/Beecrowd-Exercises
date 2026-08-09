#include<stdio.h>
#define TF 10
int main()
{
	int vet[TF], T, i;
	
	scanf("%d", &T);
	
	for(i = 0; i < TF; i++)
	{
		vet[i] = T;
		T *= 2;
	}
	
	for(i = 0; i < TF; i++)
		printf("N[%d] = %d\n", i, vet[i]);

	return 0;
}
