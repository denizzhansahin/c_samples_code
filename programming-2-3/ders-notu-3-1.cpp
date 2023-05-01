#include <stdio.h>
#include <ctype.h>

int main()
{
printf( "%s\n%s\n%s\n\n", "isdigit için: ",
isdigit( '8' ) ? "8 bir rakamdır" : "8 bir rakam değildir ",
isdigit( '#' ) ? "# bir rakamdır " : "# bir rakam değildir" );
printf( "%s\n%s\n%s\n%s\n%s\n\n", "isalpha için:",
isalpha( 'A' ) ? "A bir harftir " : "A bir harf değildir",
isalpha( 'b' ) ? "b bir harftir " : "b bir harf değildir ",
isalpha( '&' ) ? "& bir harftir " : "& bir harf değildir",
isalpha( '4' ) ? "4 bir harftir " : "4 bir harf değildir" );
printf( "%s\n%s\n%s\n%s\n\n", "isalnum için:",
isalnum( 'A' ) ? "A bir rakam yada harftir" :
"A bir rakam yada harf değildir ",
isalnum( '8' ) ? "8 bir rakam yada harftir " :
"8 bir rakam yada harf değildir",
isalnum( '#' ) ? "# bir rakam yada harftir " :
"# bir rakam yada harf değildir" );	


printf( "%s\n%s\n%s\n%s\n%s\n%s\n", "isxdigit için:",
isxdigit( 'F' ) ? "F bir heksadesimal rakamdır" :
"F bir heksadesimal rakam değildir ",
isxdigit( 'J' ) ? "J bir heksadesimal rakamdır " :
" J bir heksadesimal rakam değildir ",
isxdigit( '7' ) ? "7 bir heksadesimal rakamdır " :
" 7 bir heksadesimal rakam değildir",
isxdigit( '$' ) ? "$ bir heksadesimal rakamdır " :
" $ bir heksadesimal rakam değildir",
isxdigit( 'f' ) ? " f bir heksadesimal rakamdır " :
" f bir heksadesimal rakam değildir");
return 0;
}
