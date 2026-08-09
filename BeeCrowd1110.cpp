#include<stdio.h>

struct tpNo
{
	char carta;
	tpNo *prox;
};

struct tpDescPilha
{
	int qntd;
	tpNo *inicio, *fim;
};

tpNo *NovoNo(char elem)
{
	tpNo *novo = new tpNo;
	novo->carta = elem;
	novo->prox = NULL;
	
	return novo;
}

void IniciarDesc(tpDescPilha &P)
{
	P.qntd = 0;
	P.inicio = P.fim = NULL;
}

void InserirCarta(tpDescPilha &P, char elem)
{
	tpNo *novo = NovoNo(elem);
	
	if(P.inicio == NULL)
		P.inicio = P.fim = novo;
	else
	{
		novo->prox = P.inicio;
		P.inicio = novo;
	}
	P.qntd++;
}

void InserirFim(tpDescPilha &P, char elem)
{
	tpNo *novo = NovoNo(elem);

	P.fim->prox = novo;
	P.fim = novo;
	
	P.qntd++;
}

char RetirarTopo(tpDescPilha &P)
{
	char retAux;
	tpNo *aux;
	
	aux = P.inicio;
	P.inicio = P.inicio->prox;
	
	retAux = aux->carta;
	delete aux;
	
	P.qntd--;
	return retAux;
}

void Exibir(tpDescPilha &P)
{
	while(P.inicio != NULL)
	{
		printf("%d\n", P.inicio->carta);
		P.inicio = P.inicio->prox;
	}
}

int main(void)
{
	char carta;
	int n;
	tpDescPilha P;
	
	scanf("%d", &n);
	while(n != 0)
	{
		IniciarDesc(P);
		while(n > 0)
			InserirCarta(P, n--);
		
		if(P.qntd > 2)
			printf("Discarded cards:");
		while(P.qntd > 2)
		{
			printf(" %d,",RetirarTopo(P));
			carta = RetirarTopo(P);
			InserirFim(P, carta);
		}
		printf(" %d\n",RetirarTopo(P));
		
		printf("Remaining card: ");
		Exibir(P);
			
		scanf("%d", &n);
	}
	
	return 0;
}
