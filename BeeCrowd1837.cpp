#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, q, r;
	
	scanf("%d %d", &a, &b);
	
	q = a / b;
	r = a - b * q;	
	
	if(r < 0)
	{
		if(b > 0)
			q--;
		else
			q++;
			
		r = a - b * q;	
	}
	
	printf("%d %d\n", q, r);
	return 0;
}
