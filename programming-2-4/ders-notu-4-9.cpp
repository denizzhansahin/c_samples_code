#include <stdio.h>
#include <string.h>
int main( ) {
const char *string1 = "abcdefabcdef";
const char *string2 = "def";
printf( "%s%s\n%s%s\n\n%s\n%s%s\n",
"string1 = ", string1, "string2 = ", string2,
"string1'in icinde string2'nin karakterleriyle ",
"karsilasildigi ilk yerden itibaren string1: ",
strstr( string1, string2 ) );
return 0; }
