#include<stdio.h>
#define TF 6

int main()
{
	int i, cont = 0;
	float vet[TF];
	
	for(i = 0; i < TF; i++)
		scanf("%f", &vet[i]);
		
	for(i = 0; i < TF; i++)
		if(vet[i] > 0.0)
			cont++;
			
	printf("%d valores positivos\n", cont);
	return 0;
}
