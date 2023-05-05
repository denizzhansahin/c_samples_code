#include <stdio.h>
int main( ) {
double a, b, c;
printf( "3 ondalikli sayi girin: \n" );
scanf( "%le%lf%lg", &a, &b, &c );
printf( "Farkli ondalikli sayi gosterimleri:\n" );
printf( "%f\n%f\n%f\n", a, b, c );
return 0; }
