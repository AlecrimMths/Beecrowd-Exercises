#include<stdio.h>

int main()
{
	int idadeD, D, M, A, restA;
	
	scanf("%d", &idadeD);
	
	A = idadeD / 365;
	restA = idadeD % 365;
	M = restA / 30;
	D = restA % 30;
	
	printf("%d ano(s)\n", A);
	printf("%d mes(es)\n", M);
	printf("%d dia(s)\n", D);
	
	return 0;
}
