#include<stdio.h>

int main()
{
	int horaInicial,minutoInicial,horaFinal,minutoFinal,minutos,duracaototal,duracaoHoras,duracaoMin;
	
	scanf("%d%d%d%d",&horaInicial,&minutoInicial,&horaFinal,&minutoFinal);
	
	minutoInicial = horaInicial*60+minutoInicial;
	minutoFinal = horaFinal*60+minutoFinal;
	if(minutoInicial>=minutoFinal)
		duracaototal = minutoFinal-minutoInicial+1440;
	else
		duracaototal = minutoFinal-minutoInicial;
		
	duracaoHoras = duracaototal/60;
	duracaoMin = duracaototal%60;
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracaoHoras,duracaoMin);
	
	return 0;
}
