#include <stdio.h>
#include <string.h>

int main()
{
	const char *string = "Bu bir testtir";
	char character1 = 'u', character2 = 'z';
	char *sonuc1, *sonuc2;
	
	sonuc1 = strchr(string,character1);
	sonuc2 = strchr(string,character2);
	
	printf("ilk arama sonucu : %s\nikinci arama sonucu : %s\n",sonuc1,sonuc2);
	
	return 0;
}
