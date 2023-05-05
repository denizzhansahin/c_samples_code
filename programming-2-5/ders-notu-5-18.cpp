#include <stdio.h>

int main()
{
	printf("%x\n",100);
	printf("%d%d\n", 12, 20);
	printf("%.3f%%\n", 9.375);
	
	printf("%+10d\n",1234);
	printf("%e\n",-123.456789);
	printf("%2.3f\n",87.4573);
	
	printf("%20.3f",3.333333);
	
	float f;
	scanf("%f[%]",&f);
	printf("%f\n",f);
	
	char z[ 9 ] = { '\0' };
printf( "Bir string girin: " );
scanf( "%[1234567890]", z );
printf( "\"%s\" girdiniz.\n", z );
	double sayi;
	scanf("%ld",&sayi);
	printf("%ld\n",sayi);
}
