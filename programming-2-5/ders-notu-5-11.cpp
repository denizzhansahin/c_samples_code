#include <stdio.h>
int main( ) {
int a, b, c, d, e, f, g;
printf( "Yedi tamsayi girin: " );
scanf( "%d %i %i %i %o %u %x", &a, &b, &c, &d, &e, &f, &g );
printf( "Girilen sayilar, onluk sistemde tamsayilar olarak gosterilecek:\n" );
printf( "%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g );
return 0; }
