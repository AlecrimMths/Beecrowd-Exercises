#include<stdio.h>

int main()
{
	float A, B, C, aux;
	
	scanf("%f%f%f", &A, &B, &C);
	
	if(A < B)
	{
		aux = A;
		A = B;
		B = aux;
	}
	if(A < C)
	{
		aux = A;
		A = C;
		C = aux;
	}
	if(B < C)
	{
		aux = B;
		B = C;
		C = aux;
	}
	if(A >= B+C)
		printf("NAO FORMA TRIANGULO\n");
	else
	{
		if(A*A == B*B+C*C)
			printf("TRIANGULO RETANGULO\n");
		else if(A*A > B*B+C*C)
			printf("TRIANGULO OBTUSANGULO\n");
		else
			printf("TRIANGULO ACUTANGULO\n");
		
		if(A == B && A == C)
			printf("TRIANGULO EQUILATERO\n");
		else
			if(A == B || A == C || B == C)
				printf("TRIANGULO ISOSCELES\n");
	}
		
	return 0;
}
