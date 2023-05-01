#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
double d;
d = atof( "99.5abc" );
setlocale(LC_ALL, "Turkish");
printf( "\n%s%.3f\n%s%.3f\n",
" \"99.5abc\"stringi double' tipine dönüþtürüldü ", d,
" Dönüþtürülen sayýnýn 2 ye bölümü ", d / 2.0 );
return 0; } 
