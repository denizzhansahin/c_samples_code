#include <stdio.h>

int main()
{
	int *sayi;
	int deger = 2;
	sayi = &deger;
	printf("%d\n",*sayi);
	
	float *gercekPtr;
	float *tamsayi;
	float gercek = 12.1;
	gercekPtr = &gercek;
	printf("%f\n",*gercekPtr);
	tamsayi = gercekPtr;
	printf("%f\n",*tamsayi);
	
	int *x,y;
	y = 5;
	x = &y;
	printf("%d\n",*x);
	
	char s[] = "bu bir dizidir";
	int sayici;
	
	printf("%s",s);
	for(sayici = 0;s[sayici]!='\0';sayici++)
	{
	printf("%d\n",sayici);
	printf("%c",s[sayici]);
	}

	
	return 0;
}
