#include <stdio.h>
#include <string.h>

int main()
{
	char string[] = "Bu 6 kelimden olusan bir cumledir";
	char *atomPtr;
	
	printf("%s\n%s\n\n%s\n","Kelimelerine ayrilacak string : ", string, "Kelimeler");
	atomPtr = strtok(string, " ");
	while(atomPtr!=NULL)
	{
		printf("%s\n",atomPtr);
		atomPtr = strtok(NULL," ");
	}
	
	return 0;
}
