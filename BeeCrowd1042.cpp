#include<stdio.h>
#define TF 3
int main()
{
	int vet1[TF], vet2[TF], i, num, pos, TL = 0;
	
	while(TL < TF)
	{
		scanf("%d", &num);
		
		pos = 0;
		while(pos < TL && num > vet1[pos])
			pos++;
			
		for(i = TL; i > pos; i--)
			vet1[i] = vet1[i-1];
		
		vet1[pos] = num;
		vet2[TL] = num;
		TL++;
	}
	
	for(i = 0; i < TF; i++)
		printf("%d\n", vet1[i]);
		
	printf("\n");
	
	for(i = 0; i < TF; i++)
		printf("%d\n", vet2[i]);
	
	return 0;
}
