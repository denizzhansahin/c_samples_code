#include <stdio.h>

int main()
{
	printf("A\tA+2\tA+4\tA+6");
	for(int i = 3;i<18;i=i+3)
	{
		printf("\n%d\t%d\t%d\t%d",i,i+2,i+4,i+6);
	}
}
