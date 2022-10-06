#include <stdio.h>

int main()
{
	int sayici = 10;
	int sayi = 0;
	int enBuyuk = 0;
	int say = 0;
	
	while(say<sayici)
	{
		printf("%d.sayiyi yaz \t",say+1);
		scanf("%d",&sayi);
		printf("\n");
		
		if(sayi>=enBuyuk)
		{
			enBuyuk = sayi;
		}
		say++;
	}
	
	printf("en buyuk sayi : %d\n",enBuyuk);
}
