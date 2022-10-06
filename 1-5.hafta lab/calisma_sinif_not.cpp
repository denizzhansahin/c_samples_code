#include <stdio.h>

int main()
{
	int sayici, nott, toplam, ortalama;
	toplam = 0;
	sayici = 1;
	
	while(sayici<=10)
	{
		printf("Notu girin:");
		scanf("%d",&nott);
		toplam = toplam + nott;
		sayici = sayici+1;
	}
	ortalama = toplam/10;
	printf("Sinif ortalamasi %d dir.\n",ortalama);
	return 0;
}
