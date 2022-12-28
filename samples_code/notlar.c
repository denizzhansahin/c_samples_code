#include <stdio.h>
#include <stdlib.h>
#define elemanSayisi 19

int main()
{

    int nott = 0;
    int adim = 20;
    int notlar_toplami = 0;
    int en_dusuk;
    int en_yuksek;
    int sayilar[elemanSayisi];

    for(int i=0;i<=adim;i++)
    {
        printf("-------------------\n");
        printf("NOT GIRINIZ : \t ");
        scanf("%d,",&nott);
        printf("Girilen not : \t %d \n",nott);
        printf("-------------------\n");

        notlar_toplami += nott;
        sayilar[i] = nott;

    };

    en_dusuk = sayilar[0];
    en_yuksek = sayilar[0];

    for(int a=0;a<=adim;a++)
    {

        if(en_yuksek < sayilar[a])
        {
            en_yuksek = sayilar[a];
        };

        if(en_dusuk >= sayilar[a])
        {
            en_dusuk = sayilar[a];
        };

    };

    printf("NOTLAR TOPLAMI : %d\n",notlar_toplami);
    printf("NOTLAR ORTALAMASI : %d\n",notlar_toplami/20);
    printf("EN DUSUK DERS NOTU : %d \n",en_dusuk);
    printf("EN YUKSEK DERS NOTU : %d \n",en_yuksek);

    return 0;
}
