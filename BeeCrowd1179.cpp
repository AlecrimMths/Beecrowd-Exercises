#include<stdio.h>
#define TF 15
#define TF1 5
int main()
{
	int i, j, vet[TF], par[TF1], impar[TF1], TLP = 0, TLI = 0;
	
	for(i = 0; i < TF; i++)
		scanf("%d", &vet[i]);
		
	for(i = 0; i < TF; i++)
	{
		if(vet[i] % 2 == 0)
		{
			par[TLP] = vet[i];
			TLP++;
			if(TLP == TF1)
			{
				for(j = 0; j < TLP; j++)
					printf("par[%d] = %d\n", j, par[j]);
				TLP = 0;
			}
		}
		else
		{
			impar[TLI] = vet[i];
			TLI++;
			if(TLI == TF1)
			{
				for(j = 0; j < TLI; j++)
					printf("impar[%d] = %d\n", j, impar[j]);
				TLI = 0;
			}
		}
	}
	if(TLI > 0)
		for(j = 0; j < TLI; j++)
			printf("impar[%d] = %d\n", j, impar[j]);
	if(TLP > 0)
		for(j = 0; j < TLP; j++)
			printf("par[%d] = %d\n", j, par[j]);
	
	return 0;
}
