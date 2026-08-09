#include<stdio.h>

int main()
{
	int cod, qntd;
	float total;
	
	scanf("%d%d", &cod, &qntd);
	
	if(cod == 1)
		total = qntd * 4.00;
	else if(cod == 2)
		total = qntd * 4.50;
	else if(cod == 3)
		total = qntd * 5.00;
	else if(cod == 4)
		total = qntd * 2.00;
	else
		total = qntd * 1.50;
	
	printf("Total: R$ %.2f\n", total);
	return 0;
}
