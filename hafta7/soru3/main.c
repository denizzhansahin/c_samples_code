#include <stdio.h>
#include <stdlib.h>
int myFunction(int x,int y)
{
    return x*y;
}
int main()
{
    int deger1=0,deger2=0;

    scanf("%d%d",&deger1,&deger2);
     int deger3;
    deger3 = myFunction(deger1,deger2);
    printf("Multiplication : %d\n",deger3);
}
