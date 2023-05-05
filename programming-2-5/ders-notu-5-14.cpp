#include <stdio.h>
int main( ) {
char z[ 9 ];
printf( "Bir string girin: " );
scanf( "%[aeiou]", z );
printf( "\"%s\" girdiniz.\n", z );
return 0; } 
