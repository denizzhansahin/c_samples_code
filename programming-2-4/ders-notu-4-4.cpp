#include <stdio.h>
#include <string.h>

int main()
{
	const char *string="Bu bir testtir";
	char character1 = 'u', character2 = 'z';
	
	if(strchr(string,character1)!=NULL)
		printf("\'%c\' bu strinte bulundu : \"%s\" .\n",character1,string);
	else
	printf("\'%c\' bu strinte bulunamadi : \"%s\" .\n",character1,string);
	
	if(strchr(string,character2)!=NULL)
		printf("\'%c\' bu strinte bulundu : \"%s\" .\n",character2,string);
	else
		printf("\'%c\' bu strinte bulunamadi : \"%s\" .\n",character2,string);
}
