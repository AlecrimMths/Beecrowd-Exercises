#include<stdio.h>
#define TF 5

int main()
{
	int i, cont = 0, vet[TF];
	
	for(i = 0; i < TF; i++)
		scanf("%d", &vet[i]);
		
	for(i = 0; i < TF; i++)
		if(vet[i] % 2 == 0)
			cont++;
			
	printf("%d valores pares\n", cont);
	return 0;
}
