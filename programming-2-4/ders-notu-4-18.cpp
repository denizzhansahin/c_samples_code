#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char c = 'n';
	printf("c : %c\n",c);
	int x,y,z;
	float d,e,f;
	char* ptr;
	char s1[100] = "Bu metin etmeyiniz..... icerigi deneme amaclidir. Bu bir iceriktir.";
	char s2[200] = "etmeyiniz.....";
	printf("s1 : %s\ns2 : %s\n",s1,s2);
	
	ptr = strrchr(s1,c);
	printf("%d\n",*ptr);
	
	ptr = strchr(s2,c);
	printf("%s\n",ptr);
	
	printf("%s\n",strcpy(s1,s2));
	printf("%s\n",s1);
	return 0;
}
