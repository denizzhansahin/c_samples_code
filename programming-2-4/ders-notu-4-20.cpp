#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	char tel[50];
	scanf("%s",tel);
	printf("%s\n",tel);
	char* telNo = tel;
	printf("%s\n",telNo);
	
	char *atomPtr;
	atomPtr = strtok(telNo,"()");
	printf("%s\n",atomPtr);
	
	int alanKodu;
	alanKodu = atoi(atomPtr);
	printf("Alan kodu : %d\n",alanKodu);
	
	long list[2];
	int i = 0;
	
	while(atomPtr!=NULL)
	{
		printf("-------\n");
		printf("%s\n",atomPtr);
		atomPtr = strtok(NULL,"-");
		list[i] = atol(atomPtr);
		i++;
	}
	
	printf("---------\n");
	printf("Birinci long : %ld\n",list[0]);
	printf("Ikinci long : %ld\n",list[1]);
	
	return 0;
}
