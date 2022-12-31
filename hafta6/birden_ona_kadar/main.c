#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int sayi=1;sayi<=10;sayi++){printf("%d ",sayi);};

    printf("\n");
    for(int sayi=1;sayi<=10;sayi++)
    {
    if(sayi==4)
    {break;}
    else{printf("%d ",sayi);};
    };

    printf("\n");
    for(int b=1;b<=10;b++)
    {
    if(b==4)
    {continue;}
    else
    {printf("deger %d ",b);};
    };

    return 0;
}
