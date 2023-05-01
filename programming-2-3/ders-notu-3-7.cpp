#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( ) {
double d;
setlocale(LC_ALL, "Turkish");
d = atof( "99.5abc" );
printf( "\n%s%.3f\n%s%.3f\n",
" \"99.5abc\"stringi double' tipine dönüþtürüldü ", d,
" Dönüþtürülen sayýnýn 2 ye bölümü ", d / 2.0 );
return 0; } 
