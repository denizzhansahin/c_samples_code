#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "aaaaaaaaaa b";
	const char *string2 = "a bcdefghijklmnoprs";
	
	printf("%s%s\n%s\n\n%s\n%s\n%s%u\n","string1 = ",string1,"string2 = ",string2,"icerdigi string2 karakterleri bakimindan","string1'in uzunlugu = ",strspn(string1,string2));
	
	return 0;
}
