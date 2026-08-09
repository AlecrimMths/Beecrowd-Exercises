#include<stdio.h>
#define TF 12
int main()
{
	int i, j;
	char oper;
	float matriz[TF][TF], result = 0, div = 0;
	
	scanf("%c", &oper);
	
	for(i = 0; i < TF; i++)
		for(j = 0; j < TF; j++)
			scanf("%f", &matriz[i][j]);
		
	for(i = TF - 1; i > 0; i--)
		for(j = TF - i; j < TF; j++)
		{
			result += matriz[i][j];
			div++;
		}
		
	if(oper == 'M')
		result /= div;
	
	printf("%.1f\n", result);
	
	return 0;
}
