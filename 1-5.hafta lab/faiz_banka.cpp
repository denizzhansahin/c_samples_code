#include <stdio.h>
#include <math.h>

int main()
{
	int yil;
	double anapara, faiz, toplam, yil_faiz;
	anapara = 1000;
	faiz = 0.05;
	printf("yil\tYilSonuPara\tFaiz\n");
	for(yil = 1; yil<=10;yil++)
	{
	toplam = anapara*pow(1+faiz,yil);
	yil_faiz = toplam - anapara;
	printf("%d\t%.1f\t%f\n",yil,toplam,yil_faiz);	
	}

	
}
