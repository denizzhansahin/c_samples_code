#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float tamsayiyyuvarla(int x)
    {
        float y;
        int a = x;
        y = ((a*1+.5)/1);

        printf("Tam sayi : %d\n ve float sayi: %f\n -------\n",a,y);
    }

    float onlugayuvarla(int x)
    {
        float y;
        int a = x;
        y = (x*100+.5)/10;
        printf("Tam sayi : %d\n ve float sayi: %f\n -------\n",a,y);
    }

    float yuzlugeyuvarla(int x)
    {
        float y;
        y = (x*100+.5)/100;
        printf("Tam sayi : %d\n ve float sayi: %f\n -------\n",x,y);
    }

    float binligeyuvarla(int x)
    {
        float y;
        y = (x*1000+.5)/1000;
        printf("Tam sayi : %d\n ve float sayi: %f\n -------\n",x,y);
    }

    tamsayiyyuvarla(9);
    onlugayuvarla(49);
    yuzlugeyuvarla(199);
    binligeyuvarla(1999);


    return 0;
}
