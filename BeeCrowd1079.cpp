#include<stdio.h>
#define TF 3
int main()
{
	int cont, i, j;
	float nota1, nota2, nota3, media;
	
	scanf("%d", &cont);
	
	for(i = 0; i < cont; i++)
	{
		scanf("%f%f%f", &nota1, &nota2, &nota3);
		media = (nota1*2 + nota2*3 + nota3*5) / 10;
		printf("%.1f\n", media);
	}	
	return 0;
}
