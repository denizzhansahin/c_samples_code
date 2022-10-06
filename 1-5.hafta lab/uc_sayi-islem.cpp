#include <stdio.h>

int main()
{
	
	int sayi1, sayi2, sayi3 = 0;
	printf("UC SAYI YAZILACAK VE ISLEMLER YAPILACAKTIR\n----------\n");
	printf("uc tane sayiyi yaz :\n");
	scanf("%d",&sayi1); printf("\n"); scanf("%d",&sayi2); printf("\n"); scanf("%d",&sayi3); printf("\n");
	printf("tum sayilar :\tbirinci sayi %d\t ikinci sayi %d \t ucuncu sayi %d\n",sayi1,sayi2,sayi3);
	printf("Toplam: %d\n",sayi1+sayi2+sayi3);
	printf("Ortalama:  %d\n",(sayi1+sayi2+sayi3)/3);
	printf("Carpim: %d\n",sayi1*sayi2*sayi3);
	
	//karsilastirma - en kucuk
	int enKucuk = sayi1;
	if(enKucuk > sayi2)
	{
		enKucuk = sayi2;
	}
	if(enKucuk > sayi3)
	{
		enKucuk = sayi3;
	}
	printf("En kucuk: %d\n",enKucuk);
	
	//karsilastirma - en buyuk
	int enBuyuk = sayi1;
	if(enBuyuk< sayi2)
	{
		enBuyuk = sayi2;
	}
	if(enBuyuk<sayi3)
	{
		enBuyuk = sayi3;
	}
	printf("En buyuk: %d\n",enBuyuk);
	
}
