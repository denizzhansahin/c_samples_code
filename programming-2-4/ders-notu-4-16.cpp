#include <stdio.h>
#include <string.h>

int main()
{
	printf("2 nolu hata mesaji : %s\n",strerror(2));
	printf("7 nolu hata mesaji : %s\n",strerror(7));
	printf("11 nolu hata mesaji : %s\n",strerror(11));
	return 0;
}
