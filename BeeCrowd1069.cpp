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
	int i, qntd, n;
	char str[1001];
	tpPilha pilha;
	
	scanf("%d", &n);
	while(n>0)
	{
		scanf("%s", &str);
		InicializarPilha(pilha);
		i = 0;
		qntd = 0;
		while(str[i] != '\0')
		{
			if(!PilhaVazia(pilha.topo) && str[i] == '>')
			{
				PopPilha(pilha);
				qntd++;
			}
			else if(str[i] == '<')
				PushPilha(pilha, str[i]);
				
			i++;
		}
		printf("%d\n",qntd);
		
		n--;
	}
	return 0;
}
