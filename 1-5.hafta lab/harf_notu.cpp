#include <stdio.h>

int main()
{
	
	int deger = 0;
	int sayici = 0;
	int toplam = 0;
	int toplam_basari_puan = 0;
	int toplam_basarili_kisi = 0;
	int toplam_basarisiz_puan = 0;
	int toplam_basarisiz_kisi = 0;
	printf("Harf notu girme islemini iptal etmek 0dan kucuk veya 100den buyuk yaziniz\nBASARI kriteri 60 puandir\n");
	while(deger!=101)
	{
		printf("\n not puani yaz : "); scanf("%d",&deger); printf("\n\n");
		if(deger>100 or deger<0)
		{
			
			printf("islem iptal edildi\n");
			break;

		}
		else
		{
			if(deger>=60)
			{
			printf("%d ile A harf notu alindi\n",deger);
			toplam += deger;
			sayici++;
			toplam_basari_puan += deger;
			toplam_basarili_kisi ++;
			}
			else
			{
				if(deger>=50)
				{
					printf("%d ile B harf notu alindi\n",deger);
					toplam += deger;
					sayici++;
					toplam_basarisiz_kisi++;
					toplam_basarisiz_puan += deger;
				}
				else
				{
					if(deger>=0)
					{
						printf("%d ile FF harf notu alindi\n",deger);
						toplam += deger;
						sayici++;
						toplam_basarisiz_kisi++;
						toplam_basarisiz_puan += deger;
						
					}
				}
			}
		printf("----------\n");
		}
	}
	//sinif genel istatistik
	printf("\n\n\n---\n");
	printf("sinava %d kisi katildi\n", sayici);
	printf("toplam puan %d \n",toplam);
	printf("toplam puan ortalamasi : %d \n",toplam/sayici);
	printf("basarili toplam puan : %d\n",toplam_basari_puan);
	printf("basarili kisi sayisi: %d\n",toplam_basarili_kisi);
	printf("basarisiz toplam puan : %d\n",toplam_basarisiz_puan);
	printf("basarisiz kisi sayisi : %d\n",toplam_basarisiz_kisi);
	
	//basarili kisi ortlamasi
	if(toplam_basarili_kisi>0)
	{
		printf("basarili olanlarin ortalamasi %d\n",toplam_basari_puan/toplam_basarili_kisi);
	}
	else
	{
		printf("basarili olanlarin ortalamasi : deger yok\n");
	}

	//basarisiz kisi ortalamasi
	if(toplam_basarisiz_kisi>0)
	{
		printf("basarisiz olanlarin ortalamasi: %d\n",toplam_basarisiz_puan/toplam_basarisiz_kisi);
	}
	else
	{
		printf("basarisiz olanlarin ortalamasi: veri yok");
	}
	
	//sinif basari-basarisiz orani
	if((toplam_basarili_kisi/sayici)>=(toplam_basarisiz_kisi/sayici))
	{
		printf("\n\nBasarili Kisi/Toplam Kisi orani daha yuksek veya esit, sinif basarili\n");
	}
	else
	{
		printf("\n\nBasarisiz Kisi/Toplam Kisi orani daha yuksek, sinif basarisiz\n");
	}
	
	//printf("\n\n\n%d\n",toplam_basarili_kisi/sayici);
	//printf("\n%d\n",toplam_basarisiz_kisi/sayici);
	
	//sinif not ortalamasina gore
	if((toplam/sayici)>=50)
	{
		printf("Puan ortalamasina gore sinif basarili\n");
	}
	else
	{
		printf("Puan ortalamasina gore sinif basarisiz\n");
	}
}
