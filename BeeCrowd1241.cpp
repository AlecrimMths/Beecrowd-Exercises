#include <stdio.h>
#include <string.h>
#define TF 1001
int main()
{
	int i, dif, pos; 
	char A[TF], B[TF];
	
	scanf("%d", &i);
	getchar();
	
	while(i > 0)
	{
		scanf("%s", A);
		scanf("%s", B);
		
		if(strlen(A) < strlen(B))
			printf("nao encaixa\n");
		else
		{
			dif = strlen(A) - strlen(B);
			pos = 0;
			while(pos < strlen(B) && A[dif] == B[pos])
			{
				pos++;
				dif++;
			}
			if(pos == strlen(B))
				printf("encaixa\n");
			else
				printf("nao encaixa\n");
		}
		i--;
	}
	return 0;
}
