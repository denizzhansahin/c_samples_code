#include <stdio.h>
#include <math.h>

int main()
{
	int sayi = 0;
	int kalan = 0;
	scanf("%d",&sayi);
	int basamak = 1;
	int ikili = 0;
	int deger = 0;
	int sayici = 0;
	int gecici_deger = sayi;
	int gecici = 0;
	
	while(gecici_deger!=1/2)
	{
		deger += (gecici_deger%2)*pow(10,sayici);
		sayici++;
		gecici_deger = gecici_deger/2;
		
	}
	printf("ikili sayi sistemindeki karsiligi: %d\n", deger);
	gecici = deger;
	while(gecici>0)
	{
		kalan = gecici%10;
		gecici /= 10;
		printf("sondan %d nci basamaktaki rakam %d\n",basamak,kalan);
		basamak++;
		ikili += kalan*pow(2,basamak-2);
	}
	printf("\nonluk sayi sistemindeki karsiligi: %d\n",ikili);
}
