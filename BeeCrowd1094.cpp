#include <stdio.h>

int main()
{
	int N, quantia, total = 0, totalCoelhos = 0, totalSapos = 0, totalRatos = 0, cont = 0;
	float porcCoelho, porcRatos, porcSapos;
	char animal;
	
	scanf("%d",&N);
	
	while(cont < N)
	{
		scanf("%d %c", &quantia, &animal);
		
		total = total + quantia;
		
		if(animal == 'C')
			totalCoelhos = totalCoelhos + quantia;
		else
			if(animal == 'R')
				totalRatos = totalRatos + quantia;
			else
				if(animal == 'S')
					totalSapos = totalSapos + quantia;
										
		cont++;
	}
	
	porcCoelho = (float)totalCoelhos / total * 100;
	porcRatos = (float)totalRatos / total * 100;	
	porcSapos = (float)totalSapos / total * 100;
		
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", totalCoelhos);
	printf("Total de ratos: %d\n", totalRatos);
	printf("Total de sapos: %d\n", totalSapos);
	printf("Percentual de coelhos: %.2f %%\n", porcCoelho);
	printf("Percentual de ratos: %.2f %%\n", porcRatos);
	printf("Percentual de sapos: %.2f %%\n", porcSapos);

	return 0;
}
