#include <stdio.h>

int main()
{
	int sayi1 = 9702;
	int sayi2 = 945;
	int a;
	int b;
	int r;
	if(sayi1>sayi2)
	{
		a = sayi1;
		b = sayi2;
	}
	else
	{
		a = sayi2;
		b = sayi1;
	}
	
	while(1){
	if(b>0)
	{
		r = a%b;
		a = b;
		b = r;

	}
	else
	{
		printf("%d\n",a);
		break;
	}
	}
		
}
