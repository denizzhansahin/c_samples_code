#include <stdio.h>
#include <ctype.h>
int main( ) {
printf( "%s\n%s%s\n%s%s\n%s\n\n", "isspace için:",
"Yenisatýr", isspace( '\n' ) ? " boþluk karakteridir" :
" boþluk karakteri deðildir ",
"tab karakteri",isspace( '\t' ) ? " boþluk karakteridir " :
" boþluk karakteri deðildir ",
isspace( '%' ) ? "% boþluk karakteridir" :
"% boþluk karakteri deðildir " );
printf( "%s\n%s%s\n%s\n\n", "iscntrl için:",
"Yenisatýr", iscntrl( '\n' ) ? " kontrol karakterdir " :
" kontrol karakteri deðildir ",
iscntrl( '$' ) ? "$ kontrol karakterdir " :
"$ kontrol karakteri deðildir ");

printf( "%s\n%s\n%s\n%s\n\n", "ispunct için:",
ispunct( ';' ) ? "; noktalama iþaretidir " :
"; noktalama iþareti deðildir ",
ispunct( 'Y' ) ? "Y noktalama iþaretidir " :
"Y noktalama iþareti deðildir ",
ispunct( '#' ) ? "# noktalama iþaretidir " :
"# noktalama iþareti deðildir ");
printf( "%s\n%s\n%s%s\n\n", "isprint için:",
isprint( '$' ) ? "$ yazý karakterdir " :
" $ yazý karakteri deðildir ",
"Alarm", isprint( '\a' ) ? " yazý karakterdir " :
" yazý karakteri deðildir " );
printf( "%s\n%s\n%s%s\n", "isgraph için:",
isgraph( 'Q' ) ? "Q boþluktan farklý bir yazý karakteridir" :
"Q boþluktan farklý bir yazý karakteri deðildir",
"Boþluk", isgraph( ' ' ) ? " boþluktan farklý bir yazý karakteridir" :
" boþluktan farklý bir yazý karakteri deðildir" );
return 0; }
