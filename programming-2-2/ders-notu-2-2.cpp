#include <stdio.h>
void fonksiyon1(int);
void fonksiyon2(int);
void fonksiyon3(int);

int main()
{
	void(*f[3])(int) = {fonksiyon1,fonksiyon2,fonksiyon3};
	int secim;
	printf("0 ie 2 arasinda bir sayi yaz ya da cikis icin 3 yaz : \n");
	scanf("%d",&secim);
	
	while(secim>=0&&secim<3)
	{
		(*f[secim])(secim);
		printf("0 ile 2 arasinda bir yaz ya da cikis icin 3 yaz : \n");
		scanf("%d",&secim);
	}
	
	printf("Program calismasi bitti \n");
	return 0;
}

void fonksiyon1(int a)
{
	printf("%d girdiniz\n",a);
}

void fonksiyon2(int b)
{
	printf("%d girdiniz\n",b);
}

void fonksiyon3(int c)
{
	printf("%d girdiniz\n",c);
}
