#include <stdio.h>
#include <string.h>

int main()
{
	char s1[16],s2[] = "Stringi kopyala";
	memcpy(s1,s2,10);
	printf("%s\n%s\"%s\"\n","s2,s1'e memcpy ile kopyalandiktan sonra ","s1'in icerigi:",s1);
	return 0;	
}
