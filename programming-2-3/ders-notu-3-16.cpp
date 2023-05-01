#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
	int x,y,z;
	float d,e,f;
	char *ptr;
	char s1[100],s2[200];
	
	char c;
	c = 's';
	c = toupper(c);
	printf("%c\n",c);
	
	printf("%c bir %s",c,isalpha(c) ? "harfir":"rakamdir");
	printf("\n");
	
	char string[] = "1234567";
	
	printf("string %s : to long : %ld\n",string,atol(string));
	
	
	printf("%c bir %s",c,iscntrl(c));
	
	printf("\n%c bir %s",c,isalpha(c) ? "bir harf" : "haf degil");
	printf("\n");
	
	int i = 0;
	puts("Metin giriniz : ");
	while(s2[200]= getchar()!='\n')
		s1[i++] = s2[i];
	s1[i] = '\0';
	
	puts(s1);
	printf("%s",s1);
	
	printf("\n");
	printf("%f\n",atof("8.63582"));
	
	scanf("%c",&c);
	printf("%c\n",c);
	
	d,e,f = strtoul("“1.27 10.3 9.432",&ptr,0);
	printf("%ld\n%ld\n%ld\n",d,e,f);
	
	return 0;
}
