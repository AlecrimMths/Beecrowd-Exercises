#include<stdio.h>
#define TF 5
int main()
{
	int T, vet[TF], result = 0, i;
	
	scanf("%d", &T);
	for(i = 0; i < TF; i++)
		scanf("%d", &vet[i]);
		
	for(i = 0; i < TF; i++)
		if(T == vet[i])
			result++;
			
	printf("%d\n", result);
	return 0;
}
