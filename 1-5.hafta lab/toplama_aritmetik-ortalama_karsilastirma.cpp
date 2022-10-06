#include <stdio.h>
int main()
{
	
	//kullanicidan sayi alma ve islem yapma
	int sayi1 = 0;
	int sayi2 = 0;
	printf("IKI SAYI YAZILIP TOPLANACAK\n----------\n");
	printf("ilk sayi: \t"); scanf("%d",&sayi1); printf("\n");
	printf("ikinci sayi: \t"); scanf("%d",&sayi2); printf("\n");
	printf("--------\n ilk sayi : %d ve ikinci sayi %d toplami %d sonucunu verdi.\n",sayi1,sayi2,sayi1+sayi2);
	printf("--------\n bu sayilarin toplaminin artimetik ortalamasi (tam sayi olarak) : %d\n", (sayi1+sayi2)/2);
	
	//kullanicidan alinan sayilar ve ortalama karsilastirma
	int ortalama = (sayi1+sayi2)/2;
	if(sayi1>sayi2)
	{
		printf("birinci yazilan %d sayisi, ikinci yazilan %d sayisindan buyuktur\n",sayi1,sayi2);
	}
	else
	{
		printf("ikinci yazilan %d sayisi, birinci yazilan %d sayisindna buyuktur\n",sayi2,sayi1);
	}
	
	//sayi1 ve ortalama karsilastirma
	if(sayi1<ortalama)
	{
		printf("birinci yazilan %d sayisi, ortalama deger %d 'den kucuktur\n",sayi1,ortalama);
	}
	else
	{
		if(sayi1==ortalama)
		{
			printf("birinci yazilan %d sayisi, ortalama deger %d 'ye esittir\n",sayi1,ortalama);
		}
		else
		{
			printf("birinci yazilan %d sayisi, ortalama deger %d 'den buyuktur\n",sayi1,ortalama);
		}
		
	}
	
	//sayi2 ve ortalama karsilastirma
	if(sayi2<ortalama)
	{
		printf("ikinci yazilan %d sayisi, ortalama deger %d 'den kucuktur\n",sayi2,ortalama);
	}
	else
	{
		if(sayi2==ortalama)
		{
			printf("ikinci yazilan %d sayisi, ortalama deger %d'e esittir\n",sayi2,ortalama);
		}
		else
		{
			printf("ikinci yazilan %d sayisi, ortalama deger %d 'den buyuktur\n",sayi2,ortalama);
		}
	}
	
}
