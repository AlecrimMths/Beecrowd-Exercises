#include<stdio.h>
#define TF 5

int main()
{
	int i,pos[TF], j = 0; 
	float A[TF], x[TF];
	
	for(i = 0; i < TF; i++)
	{
		scanf("%f", &A[i]);
		if(A[i] <= 10.0)
		{
			pos[j] = i;
			x[j] = A[i];
			j++;
		}
	}
	
	for(i = 0; i < j; i++)
		printf("A[%d] = %.1f\n", pos[i], x[i]);
	return 0;
}
