#include <stdio.h>
#include <string.h>

int main()
{
	const char *string1 = "A zoooo asmnu ahgl wudhu zktr";
	int c = 'z';
	printf("%c%s%s\n\"%s\" \n",c,"karakterinin son gorundugu yerden","itibaren string1 : ",strrchr(string1,c));
	return 0;
}
