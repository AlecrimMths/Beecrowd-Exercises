#include<stdio.h>
#include<math.h>
#define TOTAL 1440


int main(void)
{
	int h1, h2, m1, m2, soma, total;
	
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	soma = h1+m1+h2+m2;
	while(soma > 0)
	{
		total = (h2-h1)*60 +(m2-m1);
		if(total < 0)
			total += TOTAL;
			
			
		printf("%d\n", total);
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
		soma = h1+m1+h2+m2;
	}
	
	return 0;
}
