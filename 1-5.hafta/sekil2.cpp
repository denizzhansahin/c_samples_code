#include <stdio.h>

int main(){
	int basamak = 80;
	int sayi = 1;
	//artan k�s�m
	for(int i = 0; i<basamak;i++)
	{
		for(int k = 0; k<sayi;k++)
		{
			printf("*");
		}
		printf("\n");
		sayi++;
	}
	//azalan k�s�m
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
	
	//bosluklu k�s�m
	int sayi1 = basamak;
	//artan k�s�m
	
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
	//azalan k�s�m
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
