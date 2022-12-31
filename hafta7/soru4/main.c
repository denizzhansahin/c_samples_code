#include <stdio.h>
#include <stdlib.h>

int enBuyuk(int a, int b, int c)
{
    int en = a;
    if(en<=b){en = b;} else if(en<=c) {en = c;};
    return en;
}

int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);

    d = enBuyuk(a,b,c);
    printf("\n En buyuk\t%d\n",d);
    return 0;
}
