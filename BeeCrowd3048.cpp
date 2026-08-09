#include<stdio.h>
#define TF 500
int main()
{
	int vet[TF], N, i, cont = 0, flag;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
		scanf("%d", &vet[i]);
		
	for(i = 0; i < N; i++)
		if(vet[i] != flag)
		{
			flag = vet[i];
			cont++;
		}
		
	printf("%d\n", cont);
	return 0;
}
