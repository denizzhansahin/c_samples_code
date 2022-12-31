#include <stdio.h>
#include <stdlib.h>
void multiplyFunction(int a, int b)
{
    printf("%d*%d=%d\n",a,b,a*b);
}
int main()
{
    int x=123,y=5;

    multiplyFunction(x,y);
}
