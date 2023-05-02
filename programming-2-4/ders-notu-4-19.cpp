#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	char a[10];
	char b[10];
	scanf("%s",a);
	printf("%s\n",a);

	scanf("%s",b);
	printf("%s\n",b);
	
	printf("%d\n",strcmp(a,b));
	int d;
	scanf("%d",&d);
	printf("%d\n",strncmp(a,b,d));
	
	
	return 0;
}
