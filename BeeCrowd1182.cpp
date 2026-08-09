#include<stdio.h>
#define TF 12
int main()
{
	int col, i, j;
	char oper;
	float matriz[TF][TF], result = 0;
	
	scanf("%d", &col);
	scanf(" %c", &oper);
	
	for(i = 0; i < TF; i++)
		for(j = 0; j < TF; j++)
			scanf("%f", &matriz[i][j]);
	
	for(i = 0; i < TF; i++)
		result += matriz[i][col];
		
	if(oper == 'M')
		result /= TF;
	
	printf("%.1f\n", result);
	
	return 0;
}
