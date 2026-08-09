#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXTAM 100000

int comparar_cres(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2) return -1;
    if (num1 > num2) return 1;
    
    return 0;
}

int comparar_decr(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 > num2) return -1;
    if (num1 < num2) return 1;
    
    return 0;
}

int main(void)
{
	int n, aux, par[MAXTAM], impar[MAXTAM], TLP = 0, TLI = 0;
	
	scanf("%d", &n);
	while(n > 0)
	{
		scanf("%d", &aux);
		if(aux % 2 == 0)
			par[TLP++] = aux;
		else
			impar[TLI++] = aux;
		
		n--;
	}
	
	qsort(par, TLP, sizeof(int), comparar_cres);
	qsort(impar, TLI, sizeof(int), comparar_decr);
	
	for(int i = 0; i < TLP; i++)
		printf("%d\n", par[i]);
	for(int i = 0; i < TLI; i++)
		printf("%d\n", impar[i]);
	
	return 0;
}
