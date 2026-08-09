#include<stdio.h>

int main()
{
	int hrs, vMedia, dis;
	float qntdL;
	
	scanf("%d", &hrs);
	scanf("%d", &vMedia);
	
	dis = hrs * vMedia;
	qntdL = dis / 12.0;
	
	printf("%.3f\n", qntdL);
	
	return 0;
}
