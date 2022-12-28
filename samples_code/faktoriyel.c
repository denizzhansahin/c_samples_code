#include <stdio.h>
#include <stdlib.h>

int main()
{


    int sayi;
    printf("LUTFEN SAYİ GIRINIZ : \n");

    scanf("%d",&sayi);


    int sayi_toplam = 1;
    int kontrol = 1;

    if(sayi==0)
    {
        printf("0");
    }
    else
    {
        while(kontrol<=sayi)
        {
            sayi_toplam = kontrol*sayi_toplam;
            kontrol +=1;

        };
    };


    printf("BU SAYININ FAKTORIYELI : \t  %d \n", sayi_toplam);


    return 0;
}
