#include <stdio.h>
#include <math.h>

int main()
{
	int x = 2, y=0;
	while(y!=100)
	{
		float us = pow(x,y);
		printf("%d sayisinin %d nci kuvveti : %.1f\n",x,y,us);
		y++;
	}
}
