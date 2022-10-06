#include <stdio.h>

int main()
{
	int a = 3;
	int b = 4;
	int c = 5;
	
	//en uzun
	int en = a;
	if(en<b)
	{
		en = b;
	}
	if(en<c)
	{
		en = c;
	}
	
	//en kisa
	int kisa = a;
	if(kisa>b)
	{
		kisa = b;
	}
	if(kisa>c)
	{
		kisa = c;
	}
	
	//orta
	int orta = 0;
	if(en>a and a>kisa)
	{
		orta = a;
	}
	if(en>b and b>kisa)
	{
		orta = b;
	}
	if(en>c and c>kisa)
	{
		orta = c;
	}
	
	
	
	printf("sayilar : %d \t %d \t %d \n",a,b,c);
	printf("en buyuk sayi: %d \t en kucuk sayi: %d \t orta sayi: %d \n",en,kisa,orta);
	//islem
	if((en*en) ==(orta*orta)+(kisa*kisa))
	{
		printf("bu sayilar ile dik ucgen olusturulabilir");
	}
	else
	{
		printf("bu sayilar ile dik ucgen olusturulamaz");
	}
}
