#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TFL 1000
#define TFC 1000

void LerPalavras(int x, char strings[TFL][TFC]);
void OrdenarString(char strings[TFL][TFC], int TL);
void ListaStrings(char strings[TFL][TFC], int TL);
int VerificarSequencia(char strings[TFL][TFC], int TL);

int main()
{
	int n, pos;
	char palavras[TFL][TFC];
	
	scanf("%d", &n);
	while(n > 0)
	{
		getchar();
		LerPalavras(n ,palavras);
		OrdenarString(palavras, n);
		printf("%d\n", VerificarSequencia(palavras, n));
		
		scanf("%d", &n);
	}
	
	return 0;
}


void LerPalavras(int x, char strings[TFL][TFC])
{
	for(int i = 0; i < x; i++)
	{
		fgets(strings[i], TFC, stdin);
		strings[i][strcspn(strings[i], "\n")] = '\0';
	}
}

void OrdenarString(char strings[TFL][TFC], int TL)
{
	int TL2 = TL;
	char aux[TFC];
	
	while(TL2 > 1)
	{
		for(int i = 0; i < TL2-1; i++)
		{
			if(strcmp(strings[i], strings[i+1]) > 0)
			{
				strcpy(aux, strings[i]);
				strcpy(strings[i],strings[i+1]);
				strcpy(strings[i+1], aux);
			}
		}
		TL2--;
	}
}

void ListaStrings(char strings[TFL][TFC], int TL)
{
	printf("\n\n");
	for(int i = 0; i < TL; i++)
		printf("%s\n", strings[i]);
}

int VerificarSequencia(char strings[TFL][TFC], int TL)
{
	int qntd = 1, pos = 0;
	
	while(pos < TL-1)
	{
		if(strstr(strings[pos+1], strings[pos]))
		{
			qntd++;
		}
		pos++;
	}
	
	return qntd;	
}
