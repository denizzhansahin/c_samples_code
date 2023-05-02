#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "Deger 3.14159";
	const char *string2 = "1234567890";
	printf("%s%s\n%s%s\n\n%s\n%s%u","string1 = ",string1,"string2 = ",string2,"string'de string2'ye ait ilk karakterin","bulundugu konum = ",strcspn(string1,string2));
	return 0;
}
