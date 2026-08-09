#include<stdio.h>

int main()
{
	float sal,novoSal,reajuste;
	
	scanf("%f", &sal);
	
	if(sal<=400.00)
	{
		reajuste = sal*0.15;
		novoSal = sal+reajuste;
		
		printf("Novo salario: %.2f\n",novoSal);
		printf("Reajuste ganho: %.2f\n",reajuste);
		printf("Em percentual: 15 %%\n");
	}
	else
		if(sal>=400.01 && sal<=800.00)
		{
			reajuste = sal*0.12;
			novoSal = sal+reajuste;
			
			printf("Novo salario: %.2f\n",novoSal);
			printf("Reajuste ganho: %.2f\n",reajuste);
			printf("Em percentual: 12 %%\n");
		}
		else
			if(sal>=800.01 && sal<=1200.00)
			{
				reajuste = sal*0.10;
				novoSal = sal+reajuste;
				
				printf("Novo salario: %.2f\n",novoSal);
				printf("Reajuste ganho: %.2f\n",reajuste);
				printf("Em percentual: 10 %%\n");
			}
			else
				if(sal>=1200.01 && sal<=2000.00)
				{
					reajuste = sal*0.07;
					novoSal = sal+reajuste;
					
					printf("Novo salario: %.2f\n",novoSal);
					printf("Reajuste ganho: %.2f\n",reajuste);
					printf("Em percentual: 7 %%\n");
				}
				else
				{
					reajuste = sal*0.04;
					novoSal = sal+reajuste;
					
					printf("Novo salario: %.2f\n",novoSal);
					printf("Reajuste ganho: %.2f\n",reajuste);
					printf("Em percentual: 4 %%\n");
				}
	return 0;
}
