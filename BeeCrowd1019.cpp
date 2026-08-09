#include<stdio.h>

int main()
{
	int tempoSegundos,segundos,minutos,horas;
	
	scanf("%d", &tempoSegundos);
	horas = tempoSegundos/3600;
	tempoSegundos = tempoSegundos%3600;
	minutos = tempoSegundos/60;
	segundos = tempoSegundos%60;
	printf("%d:%d:%d\n",horas,minutos,segundos);
	
	return 0;
}
