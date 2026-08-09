#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, pa, pb, anos, aum_a, aum_b;
	float g1, g2;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{ 
		anos = 0;
		scanf("%d %d %f %f", &pa, &pb, &g1, &g2);
		while(pa <= pb && anos <= 100)
		{
			aum_a = pa * (g1 / 100);
			aum_b = pb * (g2 / 100);
			pa += aum_a;
			pb += aum_b;
			anos++;
		}
		if(anos > 100)
			printf("Mais de 1 seculo.\n");
		else
			printf("%d anos.\n", anos);
	}	
	return 0;
}
