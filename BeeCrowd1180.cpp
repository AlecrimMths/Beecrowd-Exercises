#include<stdio.h>
#define TF 1000

int main()
{
	int vet[TF], TL, i, flag = 0, pos, menor;
	
	scanf("%d", &TL);
	
	for(i = 0; i < TL; i++)
		scanf("%d", &vet[i]);
	
	for(i = 0; i < TL; i++)
	{
		if(flag == 0)
		{
			menor = vet[i];
			pos = i;
			flag = 1;
		}
		else
		{
			if(menor > vet[i])
			{
				menor = vet[i];
				pos = i;
			}
		}	
	} 
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	return 0;
}
