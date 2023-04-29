#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sayi1 = 7.3, sayi2;
	printf("sayi1 adres = %p\n",sayi1);
	printf("sayi2 adres = %p\n",sayi2);
	float *fPtr = &sayi1;
	printf("fPtr == %.1f",*fPtr);
	printf("sayi1 adres = %p\n",sayi1);
	printf("sayi2 adres = %p\n",sayi2);
	printf("fPtr adres = %p\n",fPtr);
	printf("*fPtr adres = %p\n",*fPtr);
	
	sayi2 = *fPtr;
	printf("sayi1 adres = %p\n",sayi1);
	printf("sayi2 == %.1f",sayi2);
	printf("fPtr adres = %p\n",fPtr);
	printf("*fPtr adres = %p\n",*fPtr);
	
	printf("sayi1 adres = %p\n",sayi1);
	printf("sayi2 adres = %p\n",sayi2);
	printf("fPtr adres = %p\n",fPtr);
	printf("*fPtr adres = %p\n",*fPtr);
	
	return 0;
}
