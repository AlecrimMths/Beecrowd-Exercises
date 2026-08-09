#include<stdio.h>

int main()
{
	float A, B, C, area;
	
	scanf("%f%f%f", &A, &B, &C);
	
	if(A < B+C && B < A+C && C < B+A)
		printf("Perimetro = %.1f\n", A+B+C);
	else
	{
		area = (A+B)*C/2;
		printf("Area = %.1f\n", area);
	}	
	return 0;
}
