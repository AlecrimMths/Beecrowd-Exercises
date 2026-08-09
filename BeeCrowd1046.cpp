#include<stdio.h>

int main()
{
	int horaInicio,horaFim,duracao;
	
	scanf("%d%d",&horaInicio,&horaFim);
	if(horaInicio>=horaFim)
		duracao = horaFim-horaInicio+24;
	else
		duracao = horaFim-horaInicio;
		
	printf("O JOGO DUROU %d HORA(S)\n",duracao);
	return 0;
}
