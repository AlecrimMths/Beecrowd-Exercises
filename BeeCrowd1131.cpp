#include<stdio.h>

int main()
{
	int cont = 0, opcao = 1, gInter, gGremio, vInter = 0, vGremio = 0,
		empate = 0;
	
	while(opcao != 2)
	{
		scanf("%d%d", &gInter, &gGremio);
		
		if(gInter > gGremio)
			vInter++;
		else if(gInter < gGremio)
			vGremio++;
		else
			empate++;
			
		cont++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &opcao);
	}
	
	printf("%d grenais\n", cont);
	printf("Inter:%d\n", vInter);
	printf("Gremio:%d\n", vGremio);
	printf("Empates:%d\n", empate);
	
	if(vInter > vGremio)
		printf("Inter venceu mais\n");
	else if(vInter < vGremio)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");
	
	return 0;
}
