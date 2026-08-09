#include<stdio.h>

int main(void)
{
	double s = 0;
	for(int i = 1; i <= 100; i++)
		s += (float)1/i;
		
	printf("%.2f\n", s);
	
	return 0;
}

