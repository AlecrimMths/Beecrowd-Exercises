#include<stdio.h>

int main()
{
	int valor,resto,nota100,nota50,nota20,nota10,nota5,nota2,nota1;
	
	scanf("%d",&valor);
	resto = valor;
	nota100 = resto/100;
	resto = resto%100;
	nota50 = resto/50;
	resto = resto%50;
	nota20 = resto/20;
	resto = resto%20;
	nota10 = resto/10;
	resto = resto%10;
	nota5 = resto/5;
	resto = resto%5;
	nota2 = resto/2;
	resto = resto%2;
	nota1 = resto/1;
	
	printf("%d\n",valor);
	printf("%d nota(s) de R$ 100,00\n",nota100);
	printf("%d nota(s) de R$ 50,00\n",nota50);
	printf("%d nota(s) de R$ 20,00\n",nota20);
	printf("%d nota(s) de R$ 10,00\n",nota10);
	printf("%d nota(s) de R$ 5,00\n",nota5);
	printf("%d nota(s) de R$ 2,00\n",nota2);
	printf("%d nota(s) de R$ 1,00\n",nota1);
	
	return 0;
}
