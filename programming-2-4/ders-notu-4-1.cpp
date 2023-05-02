#include <stdio.h>
#include <string.h>

int main()
{
	char x[] = "Dogum gunun kutlu olsun";
	char y[25], z[15];
	
	printf("%s%s\n%s%s\n","x dizisindeki : ",x,"y dizisindeki string : ",strcpy(y,x));
	
	strncpy(z,x,11);
	z[11] = '\0';
	printf("z dizisindeki string : %s\n",z);
}
