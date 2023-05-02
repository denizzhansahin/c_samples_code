#include <stdio.h>
#include <string.h>

int main()
{
	char string1[15] = "BBBBBBBBBBBBBB";
	printf("string1 = %s\n", string1);
	printf("memset'ten sonra string1 = %s\n",memset(string1,'b',7));
	return 0;
}
