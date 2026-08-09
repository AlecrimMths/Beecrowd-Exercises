#include<stdio.h>

int main()
{
	double valor;
	int valorInteiro, valorDecimal,nota100,nota50,nota20,nota10,nota5,nota2,moeda100,moeda50,moeda25,moeda10,moeda5,moeda1;
	
	scanf("%lf", &valor);
	valorInteiro = valor;
	nota100 = valorInteiro/100;
	valorInteiro = valorInteiro%100;
	nota50 = valorInteiro/50;
	valorInteiro = valorInteiro%50;
	nota20 = valorInteiro/20;
	valorInteiro = valorInteiro%20;
	nota10 = valorInteiro/10;
	valorInteiro = valorInteiro%10;
	nota5 = valorInteiro/5;
	valorInteiro = valorInteiro%5;
	nota2 = valorInteiro/2;
	moeda100 = valorInteiro%2;
	
	valorDecimal = valor*100;
	valorDecimal = valorDecimal%100;
	moeda50 = valorDecimal/50;
	valorDecimal = valorDecimal%50;
	moeda25 = valorDecimal/25;
	valorDecimal = valorDecimal%25;
	moeda10 = valorDecimal/10;
	valorDecimal = valorDecimal%10;
	moeda5 = valorDecimal/5;
	moeda1 = valorDecimal%5;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",nota100);
	printf("%d nota(s) de R$ 50.00\n",nota50);
	printf("%d nota(s) de R$ 20.00\n",nota20);
	printf("%d nota(s) de R$ 10.00\n",nota10);
	printf("%d nota(s) de R$ 5.00\n",nota5);
	printf("%d nota(s) de R$ 2.00\n",nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",moeda100);
	printf("%d moeda(s) de R$ 0.50\n",moeda50);
	printf("%d moeda(s) de R$ 0.25\n",moeda25);
	printf("%d moeda(s) de R$ 0.10\n",moeda10);
	printf("%d moeda(s) de R$ 0.05\n",moeda5);
	printf("%d moeda(s) de R$ 0.01\n",moeda1);
	
	return 0;
}
