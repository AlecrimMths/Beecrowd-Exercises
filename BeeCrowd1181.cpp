#include<stdio.h>
#define TF 12

int main()
{
	int l, c, linha;
	float mat[TF][TF], soma = 0;
	char op;
	
	scanf("%d", &linha);
	scanf(" %c", &op);
	
	for(l = 0; l < TF; l++)
		for(c = 0; c <TF; c++)
			scanf("%f", &mat[l][c]);
			
	if(op == 'S')
	{
		for(c = 0; c < TF; c++)
			soma += mat[linha][c];
	}
	else
	{
		for(c = 0; c < TF; c++)
			soma += mat[linha][c];
			
		soma /= TF;
	}
	
	printf("%.1f\n", soma);
	return 0;
}
