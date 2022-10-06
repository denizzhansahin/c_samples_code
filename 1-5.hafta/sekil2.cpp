#include <stdio.h>

int main(){
	int basamak = 80;
	int sayi = 1;
	//artan kýsým
	for(int i = 0; i<basamak;i++)
	{
		for(int k = 0; k<sayi;k++)
		{
			printf("*");
		}
		printf("\n");
		sayi++;
	}
	//azalan kýsým
	for(int i = 0; i<basamak;i++)
	{
		for(int k = sayi; k>0;k--)
		{
			printf("*");
		}
		printf("\n");
		sayi--;
	}
	
	printf("\n\n");
	
	//bosluklu kýsým
	int sayi1 = basamak;
	//artan kýsým
	
	for(int i = 0; i<basamak;i++)
	{
		for(int k = sayi1; k>0;k--)
		{
			printf("-");
		}
		sayi1--;
		for(int k = 0; k<sayi;k++)
		{
			printf("*");
		}
		printf("\n");
		sayi+=2;
	}
	//azalan kýsým
	for(int i = 0; i<basamak;i++)
	{
		for(int k = 0; k<sayi1;k++)
		{
			printf("-");
		}
		sayi1++;
		for(int k = sayi; k>0;k--)
		{
			printf("*");
		}
		printf("\n");
		sayi-=2;
	}
	
}
