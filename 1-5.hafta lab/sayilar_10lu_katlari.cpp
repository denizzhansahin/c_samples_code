#include <stdio.h>

int main()
{
	printf("N\tN*10\tN*100\tN*1000");
	for(int i = 1; i<11;i++)
	{
		printf("\n%d\t%d\t%d\t%d",i,i*10,i*100,i*1000);
	}
}
