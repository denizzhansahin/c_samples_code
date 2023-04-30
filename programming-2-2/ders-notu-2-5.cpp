#include <stdio.h>

int gizem3(const char*, const char*);

int main()
{
	char string1[80],string2[80];
	printf("Iki string giriniz \n");
	scanf("%s%s",string1,string2);
	printf("Sonuc : %d\n",gizem3(string1,string2));
	return 0;
}

int gizem3(const char *s1,const char *s2)
{
	for(;*s1!='\0'&&*s2!='\0';s1++,s2++)
	{
		if(*s1!=*s2)
		{
			return 0;
		}
	}
	
	return 1;
}
