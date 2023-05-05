#include <stdio.h>
int main( ) {
int *ptr;
int x = 12345, y;
ptr = &x;
printf( "ptr nin degeri %p\n", ptr );
printf( "x in adresi %p\n\n", &x );
y = printf( "Bu satirda 27 karakter var\n" );
printf( "%d karakter yazildi\n\n", y );
printf( " %% isaretinin bicim kontrol dizesinde yazdirilmasi\n");
return 0; }
