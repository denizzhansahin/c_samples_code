#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "Bu bir testtir";
	const char *string2 = "dikkat";
	
	printf("\"\%s\",%s'%c'%s\n\"%s\"%s",string2,"stringindeki karakterlerden",*strpbrk(string1,string2),"karakteri",string1,"de gorunen ilk karakterdir.");
	return 0;
}
