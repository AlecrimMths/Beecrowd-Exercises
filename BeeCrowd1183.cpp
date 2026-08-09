#include<stdio.h>
#define TF 12

int main()
{
	int l, c;
	float mat[TF][TF], soma = 0, cont = 0;
	char op;
	
	scanf("%c", &op);
	
	for(l = 0; l < TF; l++)
		for(c = 0; c <TF; c++)
			scanf("%f", &mat[l][c]);
			
	if(op == 'S')
	{
		for(l = 0; l < TF-1; l++)
			for(c = l+1; c < TF; c++)
			{
				soma += mat[l][c];
				cont++;
			}
	}
	else
	{	
		for(l = 0; l < TF; l++)
			for(c = l+1; c < TF; c++)
			{
				soma += mat[l][c];
				cont++;
			}
				
		soma /= cont;
	}
	
	printf("%.1f\n", soma);
	return 0;
}
