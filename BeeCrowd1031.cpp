#include<stdio.h>
#define TF 100
int main()
{
	int N, reg[TF], energia, pos, cont, i, m;
	
	scanf("%d", &N);
	while(N != 0)
	{
		for(i = 0; i < N; i++)
			reg[i] = 1;
			
		energia = N;
		pos = 0;
		m = 1;
		cont = m;
		while(energia > 1)
		{
			while(reg[pos] == 0 && pos < N)
				pos++;
				
			while(reg[pos] == 1 && pos < N)
			{
				if(cont == 0)
					cont = m;
					
				if(cont == m)
				{
					reg[pos] = 0;
					energia--;
				}
				cont--;
				pos++;
				
				if(energia != 0 && reg[12] == 0)
				{
					for(i = 0; i < N; i++)
						reg[i] = 1;
			
					energia = N;
					pos = 0;
					m++;
					cont = m;
				}
			}
			
			if(pos == N)
				pos = 0;
		}
		
		printf("%d\n", m);
		scanf("%d", &N);
	}
	
	
	return 0;
}
