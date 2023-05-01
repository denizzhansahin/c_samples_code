#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
setlocale(LC_ALL, "Turkish");
long x;
const char *string = "-1234567abc";
char *kalanPtr;
x = strtol( string, &kalanPtr, 0 );
printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
"Orijinal string: ", string,
"Dönüþtürülen deðer: ", x,
"Orijinal stringden geriye kalan: ",
kalanPtr,
"Dönünüþtürülen deðer artý 567: ", x + 567 );
return 0; }
