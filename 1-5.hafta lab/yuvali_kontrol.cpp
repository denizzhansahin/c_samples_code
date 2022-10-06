#include <stdio.h>

int main()
{
	int gecenler = 0, kalanlar = 0, ogrenci = 1, sonuc=0;
	while(ogrenci<=10)
	{
		printf("sonucu girin(1=gecti,2=kaldi):");
		scanf("%d",&sonuc);
		
		if(sonuc==1)
		{
			gecenler = gecenler + 1;
		}
		else
		{
			kalanlar = kalanlar + 1;
		}
		
		ogrenci = ogrenci + 1;	
	}
	
	printf("gecenler %d\n",gecenler);
	printf("kalanlar %d\n",kalanlar);
	
	if(gecenler>8)
	{
		printf("yuksek basari\n");
	}
	return 0;
}
