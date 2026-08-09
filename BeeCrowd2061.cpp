#include<stdio.h>
#include<string.h>
int main()
{
	int N, M, i;
	char acao[10];
	
	scanf("%d%d", &N, &M);
	getchar();
	for(i = 0; i < M; i++)
	{
		gets(acao);
		if(strcmp(acao, "clicou") == 0)
			N--;
		else
			N++;
	}
	
	printf("%d\n", N);
	return 0;
}
