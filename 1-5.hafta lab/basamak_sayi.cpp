#include <stdio.h>

int main()
{
	int sayi = 0;
	int kalan = 0;
	scanf("%d",&sayi);
	int gecici = sayi;
	int basamak = 1;
	int yedi = 0;
	while(gecici>0)
	{
		kalan = gecici%10;
		gecici /= 10;
		printf("sondan %d nci basamaktaki rakam %d\n",basamak,kalan);
		basamak++;
		if(kalan==7)
		{
			yedi++;
		}
	}
	printf("toplam %d kadar 7 rakami bulundu\n",yedi);
}
