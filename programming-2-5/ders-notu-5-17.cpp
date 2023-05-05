#include <stdio.h>
int main( ) {
int ay1, gun1, yil1, ay2, gun2, yil2;
printf( "aa-gg-yyyy biciminde bir tarih girin: " );
scanf( "%d%*c%d%*c%d", &ay1, &gun1, &yil1 );
printf( "ay = %d gun = %d yil = %d\n\n", ay1, gun1, yil1 );
printf( "aa/gg/yyyy biciminde bir tarih girin: " );
scanf( "%d%*c%d%*c%d", &ay2, &gun2, &yil2 );
printf( "ay = %d gun = %d yil = %d\n",
ay2, gun2, yil2 );
return 0; }
