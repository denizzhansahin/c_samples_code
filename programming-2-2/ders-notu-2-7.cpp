#include <stdio.h>
#define OGR 3
#define SINAV 4

int minumum(const int[][SINAV],int,int);
int maksimum(const int[][SINAV],int,int);
double ortalama(const int[],int);
void diziyiYazdir(const int[][SINAV],int,int);

int main()
{
	int ogrenci;
	const int ogrenciNotlari[OGR][SINAV] = {{77,68,86,73},{96,87,89,78},{70,90,86,81}};
	printf("Dizi : \n");
	
	diziyiYazdir(ogrenciNotlari,OGR,SINAV);
	printf("\n\n Min.Not : %d\n Max.Not : %d\n",minimum(ogrenciNotlari,OGR,SINAV),maksimum(ogrenciNotlari,OGR.SINAV));
	for(ogrenci = 0; ogrenci<=OGR-1;ogrenci++)
	printf("Ogrenci %d icin ortalama %.2f\n", ogrenci,ortalama(ogrenciNotlari[ogrenci],SINAV));
	
	return 0;
	
}

int minimum(const int notlar[][SINAV], int talebe,int testler)
{
	int i,j, dusukNot = 100;
	for(i=0;i<=talebe-1;i++)
	{
		for(j=0;j<=testler-1;j++)
		{
			if(notlar[i][j]<dusukNot)
			{
				dusukNot = notlar[i][j];
			}
		}
	}
	
	return dusukNot;
}

int maksimum(const int notlar[][SINAV],int talebe,int testler)
{
	int i,j,yuksekNot = 0;
	for(i=0;i<=talebe-1;i++)
	{
		for(j = 0; j<=testler-1;j++)
		{
			if(notlar[i][j]>yuksekNot)
			{
				yuksekNot = notlar[i][j];
			}
		}
	}
	return yuksekNot;
}

double ortalama(const int notlarinKumesi[],int testler)
{
	int i, toplam;
	for(i = 0; i<=testler-1;i++)
	{
		toplam += notlarinKumesi[i];
	}
	return (double) toplam /testler;
}

void diziyiYazdir(const int notlar[][SINAV],int talebe, int testler)
{
	int i,j;
	printf("[0][1][2][3] \n");
	for(i=0;i<=talebe-1;i++)
	{
		printf("\n ogrenciNotlari[%d]", i);
	}
	
	for(j=0;j<=testler-1;j++)
	{
		printf("%-5d",notlar[i][j]);
	}
}
