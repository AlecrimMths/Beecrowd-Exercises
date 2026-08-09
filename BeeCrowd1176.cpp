#include<stdio.h>
#define TF 61

int main()
{
	int N, T, i;
	unsigned long long fib[TF];
	
	fib[0] = 0;
	fib[1] = 1;
	scanf("%d", &T);

	for(i = 2; i < TF; i++)
		fib[i] = fib[i-1] + fib[i-2];
		
	for(i = 0; i < T; i++)
	{
		scanf("%d", &N);
		printf("Fib(%d) = %lld\n", N, fib[N]);
	}
	
	/*A lógica que usei antes deu errado porque pensei que era 
	  necessário guardar cada caso de teste em outro vetor, para
	  depois exibir tudo junto*/
	
	return 0;
}

/*
#include<stdio.h>

int main()
{
	int N[60], T, i, maior = 0;
	unsigned long long fib[61];
	
	fib[0] = 0;
	fib[1] = 1;
	scanf("%d", &T);
	for(i = 0; i < T; i++)
	{
		scanf("%d", &N[i]);
		if(N[i] > maior)
			maior = N[i];
	}
	for(i = 2; i <= maior; i++)
		fib[i] = fib[i-1] + fib[i-2];
		
	for(i = 0; i < T; i++)
		printf("Fib(%d) = %lld\n", N[i], fib[N[i]]);
	
	return 0;
}
*/
