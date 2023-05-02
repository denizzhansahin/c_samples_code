#include <stdio.h>
#include <string.h>

int main()
{
	char x[] = "Elvin Tatli Evim";
	printf("%s%s\n","memmove'dan once x dizisi icindeki string :",x);
	printf("%s%s\n","memmove'dan sonra x dizisi icindeki string :",memmove(x,&x[5],10));
	return 0;
}
