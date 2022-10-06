#include <stdio.h>
#include <math.h>

int main()
{
	int sayi = 0;
	int kalan = 0;
	scanf("%d",&sayi);
	int gecici = sayi;
	int basamak = 1;
	int ikili = 0;
	
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
