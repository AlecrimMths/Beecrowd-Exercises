#include<stdio.h>
#define TF 100
int main()
{
	int i;
	double vet[TF], T;
	
	scanf("%lf", &T);
	
	for(i = 0; i < TF; i++)
	{
		vet[i] = T;
		T /= 2;
	}
	
	for(i = 0; i < TF; i++)
		printf("N[%d] = %.4lf\n", i, vet[i]);

	return 0;
}
