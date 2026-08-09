#include<stdio.h>
#define TF 100

int main()
{
	int vet[TF], i, maior = 0, pos;
	
	for(i = 0; i < TF; i++)
		scanf("%d", &vet[i]);
		
	for(i = 0; i < TF; i++)
		if(vet[i] > maior)
		{
			maior = vet[i];
			pos = i + 1;
		}
		
	printf("%d\n%d\n", maior, pos);
	return 0;
}
