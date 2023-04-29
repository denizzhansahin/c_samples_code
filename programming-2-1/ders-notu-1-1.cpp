#include <stdio.h>

void kopya1(char*,const char*);
void kopya2(char*,const char*);

int main()
{
	char string1[10], *string2 = "Merhaba", string3[10],*string4="Gule Gule";
	kopya1(string1,string2);
	printf("string1 = %s\n",string1);
	
	kopya2(string3,string4);
	printf("string3 = %s\n",string3);
	
	return 0;
}

/*s2 , s1 içine kopyalanýr*/
/*dizi gosterimi*/
void kopya1(char *s1,const char *s2)
{
	int i;
	for(;(*s1=*s2)!='\0';s1++,s2++);
}

/*s2 , s1 içine kopyalanýr*/
/*isaretci gosterimi*/
void kopya2(char *s1, const char *s2)
{
	for(;(*s1=*s2)!='\0';s1++,s2++);
}
