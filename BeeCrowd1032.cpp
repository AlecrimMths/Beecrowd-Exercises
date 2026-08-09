#include<stdio.h>
#include<math.h>
#define TF 3501


void Primos(int vetP[])
{
	int div, TLP = 0;
	for(int i = 2; TLP < TF; i++)
	{
		div = 0;
		for(int j = 1; j <= i/2; j++)
		{
			if(i%j == 0)
			 div++;
			if(div > 1)
				break;
		}
		
		if(div == 1)
			vetP[TLP++] = i;
	}
}
	

int Josepheus(int n, int primos[])
{
    int resp = 1;

    for(int i = 2; i <= n; i++)
        resp = (resp + primos[n-i] - 1) % i + 1;

    return resp;
}

int main()
{
	int n, vetPrimos[TF], pos;
	
	Primos(vetPrimos);
	
	do
	{
		scanf("%d",&n);
		pos = 0;
		if(n != 0)
			printf("%d\n", Josepheus(n, vetPrimos));
		
	}while(n!= 0);

	return 0;
}
