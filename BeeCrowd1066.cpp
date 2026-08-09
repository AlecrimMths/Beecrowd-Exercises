#include<stdio.h>
#define TF 5

int main()
{
	int i, vet[TF], par = 0, impar = 0, pos = 0, neg = 0;
	
	for(i = 0; i < TF; i++)
		scanf("%d", &vet[i]);
		
	for(i = 0; i < TF; i++)
	{
		if(vet[i] % 2 == 0)
			par++;
		else
			impar++;
			
		if(vet[i] > 0)
			pos++;
		else if(vet[i] < 0)
			neg++;
	}
			
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);
	return 0;
}
