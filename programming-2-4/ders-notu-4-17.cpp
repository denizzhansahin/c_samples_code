#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "abcdefghijklmnopqrstuvwxyz";
	const char *string2 = "yedi";
	const char *string3 = "Yozgat";
	
	printf("%s\"%s\" = %u\n%s\"%s\" = %u\n%s\"%s\" = %u\n","String1 uzunlugu ",string1,strlen(string1),"String2 uzunlugu ",string2,strlen(string2),"String3 uzunlugu ",string3,strlen(string3));
	return 0;
}
