#include<stdio.h>

int main()
{
	int alcool = 0, gasolina = 0, diesel = 0, opcao;
	
	scanf("%d", &opcao);
	while(opcao != 4)
	{
		if(opcao == 1)
			alcool++;
		else if(opcao == 2)
			gasolina++;
		else if(opcao == 3)
			diesel++;
		
		scanf("%d", &opcao);
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
	return 0;
}
