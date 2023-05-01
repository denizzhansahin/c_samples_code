#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char s;
	printf("Karakter yaziniz : ");
	scanf("%c",&s);
	printf("\nYazilan karakter : %c \n",s);
	
	printf("%c icin durumlar : \n");
	printf("%s",isdigit(s)?"rakam":"rakam degil");
	printf("\n");
	printf("%s",isalpha(s)?"harf":"harf degil");
	printf("\n");
	printf("%s",isalnum(s)?"rakam veya harf":"rakam veya harf degil");
	printf("\n");
	printf("%s",isxdigit(s)?"onaltilik karakter":"onaltilik karakter"" degil");
	printf("\n");
	printf("%s",islower(s)?"kucuk harf":"kucuk harf degil");
	printf("\n");
	printf("%c",tolower(s));
	printf("\n");
	printf("%s",isspace(s)?"kontrol karakteri":"kontrol karakteri degil");
	printf("\n");
	printf("%s",ispunct(s)?"bosluk,rakam,harf olabilir":"bosluk,rakam,harf olamaz");
	printf("\n");
	printf("%s",isprint(s)?"bosluk veya yazdirma karakteri":"bosluk veya yazdirma karakteri degil");
	printf("\n");
	printf("%s",isgraph(s)?"bosluk karakteri haricinde":"bosluk karakteri harici degil");
	
	return 0;
}
