#include<stdio.h>
#include<string.h>
#define TF 110
int main()
{
	int num, i, pos, TL;
	char contrato[TF], contrato_saida[TF];
	
	scanf("%d %s", &num, contrato);

	while(num != 0 && strcmp("0", contrato) != 0)
	{
		TL = 0;	
		for(i = 0; contrato[i] != '\0'; i++)
			if(contrato[i] != num + 48)
			{
				contrato_saida[TL] = contrato[i];
				TL++;
			}
		contrato_saida[TL] ='\0';
		
		pos = 0;
		while(pos < TL && contrato_saida[pos] == '0')
			pos++;
			
		if(pos == TL)
			printf("0\n");
		else
			printf("%s\n", contrato_saida + pos);
		
		scanf("%d %s", &num, contrato);
	}
	
	return 0;
}
