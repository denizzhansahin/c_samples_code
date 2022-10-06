#include <stdio.h>

int main()
{
	float a = 17;
	float b = 12;
	float c = 1;
	int kontrol = 0;
	printf("Sayilar: %f\t%f\t%f\n",a,b,c);
	if(a<b+c and a>b-c)
	{
		kontrol++;
	}
	if(b<a+c and b>a-c)
	{
		kontrol++;
	}
	if(c<a+b and c>a-b)
	{
		kontrol++;
	}
	
	if(kontrol == 3)
	{
		printf("bu sayilar ile ucgen olusturulabilir.");
	}
	else
	{
		printf("bu sayilar ile ucgen olusturulamaz.");
	}
}
