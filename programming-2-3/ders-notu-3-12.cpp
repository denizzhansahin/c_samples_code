#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
setlocale(LC_ALL, "Turkish");
unsigned long x;
const char *string = "1234567abc";
char *kalanPtr;
x = strtoul( string, &kalanPtr, 0 );
printf( "%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
"Orijinal string: ", string,
"D�n��t�r�len de�er: ", x,
"Orijinal stringden geriye kalan: ",
kalanPtr,
"D�n�n��t�r�len de�er eksi 567: ", x - 567 );
return 0; }
