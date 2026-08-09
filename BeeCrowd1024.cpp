#include<stdio.h>
#include<string.h>
#define TF 1001
int main()
{
	int N, i, j;
	char palavra[TF], palavra_final[TF];
	
	scanf("%d", &N);
	fgetchar();
	for(i = 0; i < N; i++)
	{
		fgets(palavra, sizeof(palavra), stdin);
		for(j = 0; j < strlen(palavra); j++)
			if((palavra[j] >= 65 && palavra[j] <= 90) || (palavra[j] >= 97 && palavra[j] <= 122))
				palavra[j] += 3;
				
		for(j = 0; j < strlen(palavra); j++)
			palavra_final[j] = palavra[strlen(palavra)-1-j];
			
		palavra_final[j] = '\0';
		
		for(j = strlen(palavra_final)/2; j < strlen(palavra_final); j++)
			palavra_final[j]--;
			
		printf("%s\n", palavra_final);
	}
	return 0;
}
