#include<stdio.h>
#include<string.h>

int main()
{
	int diaI, horaI, minI, segI, diaF, horaF, minF, segF,
		seg_TotalI = 0, seg_TotalF = 0, seg_Total;
	
	scanf("Dia %d", &diaI);
	scanf("%d : %d : %d\n", &horaI, &minI, &segI);
	scanf("Dia %d", &diaF);
	scanf("%d : %d : %d", &horaF, &minF, &segF);
	
	seg_TotalI += segI + (minI*60) + (horaI*3600) + (diaI*86400);
	seg_TotalF += segF + (minF*60) + (horaF*3600) + (diaF*86400);
	seg_Total = seg_TotalF - seg_TotalI;
	
	diaF = seg_Total / 86400;
	seg_Total %= 86400;
	horaF = seg_Total / 3600;
	seg_Total %= 3600;
	minF = seg_Total / 60;
	segF = seg_Total % 60;
	
	printf("%d dia(s)\n", diaF);
	printf("%d hora(s)\n", horaF);
	printf("%d minuto(s)\n", minF);
	printf("%d segundo(s)\n", segF);
	return 0;
}
