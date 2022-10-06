#include <stdio.h>

int main()
{
	int sayici;
	for(sayici=1;sayici<=10;sayici++)
	printf("%d\n",sayici);
	
	int toplam, sayi = 0;
	for(sayi=2;sayi<=100;sayi += 2)
	{
		toplam+=sayi;
		if(sayi%2==0)
		printf("%d sayisi cift sayidir.\n",sayi);
	}
	
	
	printf("toplam %d\n",toplam);
}
