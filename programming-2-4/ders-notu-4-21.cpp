#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tersCevir(char*);
int boyutBulma(char*);

int main()
{
	char metin[500];
	scanf("%s",metin);
	printf("%s\n",metin);
	
	char* atomPtr;
	atomPtr = strtok(metin,"-");
	printf("--------------------------");
	
	while(atomPtr!=NULL)
	{	
		printf("-------\n");
		atomPtr = strtok(NULL,"-");
		printf("Gonderilen Ifade : %s\n",atomPtr);
		tersCevir(atomPtr);
	}
}

int boyutBulma(char* text)
{
	printf("Boyut Bulma Gelen Text : %s\n",text);
	int i = 0;
	while(text[i]!=NULL)
	{	
		
		text[i]++;
		i++;
		
	}
	
	printf("Boyut Gonderilen : %d\n",i);
	return i;
}

void tersCevir(char* text)
{	
	printf("Ters Cevir Gelen Text : %s\n",text);
	int boyut;
	boyut = boyutBulma(text);
	printf("Boyut Alinan : %d\n",boyut);
	
	boyut--;
	printf("Yeni boyut : %d\n",boyut);
	printf("Ters Cevrili Ifade : ");
	
	int i = 0;
	while (boyut!=0)
	{
		printf("eleman : %c ve sira : %d \n",text[boyut],boyut);
		boyut--;
	}
	printf("\n----------");
}
