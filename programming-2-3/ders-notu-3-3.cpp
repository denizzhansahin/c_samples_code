#include <stdio.h>
#include <ctype.h>
int main( ) {
printf( "%s\n%s%s\n%s%s\n%s\n\n", "isspace i�in:",
"Yenisat�r", isspace( '\n' ) ? " bo�luk karakteridir" :
" bo�luk karakteri de�ildir ",
"tab karakteri",isspace( '\t' ) ? " bo�luk karakteridir " :
" bo�luk karakteri de�ildir ",
isspace( '%' ) ? "% bo�luk karakteridir" :
"% bo�luk karakteri de�ildir " );
printf( "%s\n%s%s\n%s\n\n", "iscntrl i�in:",
"Yenisat�r", iscntrl( '\n' ) ? " kontrol karakterdir " :
" kontrol karakteri de�ildir ",
iscntrl( '$' ) ? "$ kontrol karakterdir " :
"$ kontrol karakteri de�ildir ");

printf( "%s\n%s\n%s\n%s\n\n", "ispunct i�in:",
ispunct( ';' ) ? "; noktalama i�aretidir " :
"; noktalama i�areti de�ildir ",
ispunct( 'Y' ) ? "Y noktalama i�aretidir " :
"Y noktalama i�areti de�ildir ",
ispunct( '#' ) ? "# noktalama i�aretidir " :
"# noktalama i�areti de�ildir ");
printf( "%s\n%s\n%s%s\n\n", "isprint i�in:",
isprint( '$' ) ? "$ yaz� karakterdir " :
" $ yaz� karakteri de�ildir ",
"Alarm", isprint( '\a' ) ? " yaz� karakterdir " :
" yaz� karakteri de�ildir " );
printf( "%s\n%s\n%s%s\n", "isgraph i�in:",
isgraph( 'Q' ) ? "Q bo�luktan farkl� bir yaz� karakteridir" :
"Q bo�luktan farkl� bir yaz� karakteri de�ildir",
"Bo�luk", isgraph( ' ' ) ? " bo�luktan farkl� bir yaz� karakteridir" :
" bo�luktan farkl� bir yaz� karakteri de�ildir" );
return 0; }
