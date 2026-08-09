#include<stdio.h>
#define TF 20
int main()
{
	int i, N[TF], aux;
	
	for(i = 0; i < TF; i++)
		scanf("%d", &N[i]);
	
	for(i = 0; i < TF/2; i++)
	{
		aux = N[i];
		N[i] = N[TF-1-i];
		N[TF-1-i] = aux;
	}
	
	for(i = 0; i < TF; i++)
		printf("N[%d] = %d\n", i, N[i]);
	
	return 0;
}
