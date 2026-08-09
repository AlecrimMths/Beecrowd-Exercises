#include<stdio.h>

int main()
{
	int i, j, cont = 3;
	
	for(i = 1; i < 10; i+=2)
		for(j = 7, cont = 0; cont < 3; cont++, j--)
			printf("I=%d J=%d\n", i, j+i-1);

	return 0;
}
