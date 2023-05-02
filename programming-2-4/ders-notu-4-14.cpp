#include <stdio.h>
#include <string.h>

int main()
{
	const char *s = "Bu bir stringtir";
	printf("%s\'%c\'%s\"%s\"\n","s'in","r","karakterlerinden sonra kalani : ",memchr(s,'r',16));
	return 0;
}
