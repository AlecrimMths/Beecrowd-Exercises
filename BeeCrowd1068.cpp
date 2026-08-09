#include<stdio.h>
#include<string.h>

#define MAXPILHA 1000

struct tpPilha
{
	int topo;
	char pilha[MAXPILHA];
};

void InicializarPilha(tpPilha &P)
{
	P.topo = -1;
}

void PushPilha(tpPilha &P, char elemento)
{
	P.pilha[++P.topo] = elemento;
}

char PopPilha(tpPilha &P)
{
	return P.pilha[P.topo--];
}

char PilhaCheia(int topo)
{
	return topo == MAXPILHA-1;
}

char PilhaVazia(int topo)
{
	return topo == -1;
}


int main(void)
{
	int i, correto;
	char str[1001];
	tpPilha pilha;
	
	while(scanf("%s\n", &str) != EOF)
	{
		InicializarPilha(pilha);
		i = 0;
		correto = 1;
		while(str[i] != '\0' && correto == 1)
		{
			if(str[i] == ')')
			{
				if(PilhaVazia(pilha.topo))
					correto = 0;
				else
					PopPilha(pilha);
			}
			else if(str[i] == '(')
				PushPilha(pilha, str[i]);
				
			i++;
		}
		if(PilhaVazia(pilha.topo) && correto == 1)
			printf("correct\n");
		else
			printf("incorrect\n");
		
		scanf("%s", str);
	}
	return 0;
}
