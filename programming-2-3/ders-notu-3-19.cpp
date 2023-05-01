#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
	char a[50],b[50],c[50],d[50];
	scanf("%s%s%s%s",&a,&b,&c,&d);
	
	int q,w,r,t;
	q = atoi(a);
	w = atoi(b);
	r = atoi(c);
	t = atoi(d);
	
	printf("%d + \t %d + \t %d + \t %d = %d",q,w,r,t,q+w+r+t);
	
	return 0;
}
