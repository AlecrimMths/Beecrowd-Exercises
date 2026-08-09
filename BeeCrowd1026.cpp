#include<stdio.h>
#include<math.h>
#define TF 32
int main()
{
	int vNum1[TF], vNum2[TF], vMofiz[TF], TL1, TL2, resto, i;
	unsigned long num1, num2, somaMofiz;
	
	while(scanf("%lu%lu", &num1, &num2) != EOF)
	{
		TL1 = 0;
		TL2 = 0;
		somaMofiz = 0;
		for(i = 0; i < TF; i++)
		{
			vNum1[i] = 0;
			vNum2[i] = 0;
			vMofiz[i] = 0;
		}
		while(num1 > 0)
		{
			resto = num1 % 2;
			num1 = num1 / 2;
			vNum1[TL1] = resto;
			TL1++;
		}
		while(num2 > 0)
		{
			resto = num2 % 2;
			num2 = num2 / 2;
			vNum2[TL2] = resto;
			TL2++;
		}			
		for(i = 0; i < TF; i++)
		{
			if(vNum1[i] == 1 && vNum2[i] == 1)
				vMofiz[i] = 0;
			else
				vMofiz[i] = vNum1[i] + vNum2[i];
		}
		for(i = 0; i < TF; i++)
			somaMofiz += pow(2, i) * vMofiz[i];
		
		printf("%lu\n", somaMofiz);
	}	
	return 0;
}
