#include <stdio.h>
#include <ctype.h>

int main()
{
printf( "%s\n%s\n%s\n\n", "isdigit i�in: ",
isdigit( '8' ) ? "8 bir rakamd�r" : "8 bir rakam de�ildir ",
isdigit( '#' ) ? "# bir rakamd�r " : "# bir rakam de�ildir" );
printf( "%s\n%s\n%s\n%s\n%s\n\n", "isalpha i�in:",
isalpha( 'A' ) ? "A bir harftir " : "A bir harf de�ildir",
isalpha( 'b' ) ? "b bir harftir " : "b bir harf de�ildir ",
isalpha( '&' ) ? "& bir harftir " : "& bir harf de�ildir",
isalpha( '4' ) ? "4 bir harftir " : "4 bir harf de�ildir" );
printf( "%s\n%s\n%s\n%s\n\n", "isalnum i�in:",
isalnum( 'A' ) ? "A bir rakam yada harftir" :
"A bir rakam yada harf de�ildir ",
isalnum( '8' ) ? "8 bir rakam yada harftir " :
"8 bir rakam yada harf de�ildir",
isalnum( '#' ) ? "# bir rakam yada harftir " :
"# bir rakam yada harf de�ildir" );	


printf( "%s\n%s\n%s\n%s\n%s\n%s\n", "isxdigit i�in:",
isxdigit( 'F' ) ? "F bir heksadesimal rakamd�r" :
"F bir heksadesimal rakam de�ildir ",
isxdigit( 'J' ) ? "J bir heksadesimal rakamd�r " :
" J bir heksadesimal rakam de�ildir ",
isxdigit( '7' ) ? "7 bir heksadesimal rakamd�r " :
" 7 bir heksadesimal rakam de�ildir",
isxdigit( '$' ) ? "$ bir heksadesimal rakamd�r " :
" $ bir heksadesimal rakam de�ildir",
isxdigit( 'f' ) ? " f bir heksadesimal rakamd�r " :
" f bir heksadesimal rakam de�ildir");
return 0;
}
