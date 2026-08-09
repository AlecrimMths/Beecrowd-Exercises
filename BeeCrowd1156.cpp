#include<stdio.h>

int main(void)
{
	int D, N;
	double s = 1;
	for(D = 3, N = 2; D <= 39; D+=2, N*=2)
		s += (float)D/N;
		
	printf("%.2f\n", s);
	
	return 0;
}

