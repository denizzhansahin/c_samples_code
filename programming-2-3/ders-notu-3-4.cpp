#include <stdio.h>
#include <stdlib.h>

int main()
{
	double d;
	char str[] = "99.5a";
	//char *str = "99.5a";
	
	d = atof(str);
	printf("%s%s%.3f\n%s%.3f\n",str,"stringi double tipine donusturuldu",d,"Donusturulen sayininin 2 ye bolumu",d/2.0);
}
