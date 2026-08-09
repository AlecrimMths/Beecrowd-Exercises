#include<stdio.h>
#include<string.h>

int main()
{
	char palavra1[25], palavra2[25], palavra3[25];
	
	gets(palavra1);
	gets(palavra2);
	gets(palavra3);
	
	if(strcmp(palavra1, "vertebrado") == 0)
		if(strcmp(palavra2, "ave") == 0)
			if(strcmp(palavra3, "carnivoro") == 0)
				printf("aguia\n");
			else
				printf("pomba\n");
		else
			if(strcmp(palavra3, "onivoro") == 0)
				printf("homem\n");
			else
				printf("vaca\n");		
	else
		if(strcmp(palavra2, "inseto") == 0)
			if(strcmp(palavra3, "hematofago") == 0)
				printf("pulga\n");
			else
				printf("lagarta\n");
		else
			if(strcmp(palavra3, "hematofago") == 0)
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
	
	return 0;
}
