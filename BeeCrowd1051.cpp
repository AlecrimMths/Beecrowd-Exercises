#include<stdio.h>

int main()
{
	float sal,resto,imposto;
	
	scanf("%f", &sal);
	if(sal>= 0.00 &&sal<=2000.00)
	{
		printf("Isento\n");
	}
	else
	{
		if(sal>2000.00 && sal<=3000.00)
		{
			resto = sal-2000;
			imposto = resto*0.08;
		}
		else
			if(sal>3000.00 && sal<=4500.00)
			{
				resto = sal-3000;
				imposto = resto*0.18+80.00;
			}
			else
			if(sal>4500.00)
			{
				resto = sal-4500;
				imposto = resto*0.28+80.00+270.00;
			}
	printf("R$ %.2f\n",imposto);
	}
	return 0;
}
