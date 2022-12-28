#include <stdio.h>
#include <stdlib.h>

int main()
{


    int sayi;
    int sayici = 0;

    int cift_toplam = 0;
    int tek_toplam = 0;

    while(sayici!=10)
    {
        printf("---------------------------------------\n");
        printf("BIR SAYI YAZ: \t");
        scanf("%d",&sayi);
        printf("-----\n");
        if(sayi%2==0)
        {
            printf("cift sayi \n");
            cift_toplam += sayi;
        }
        else{
            printf("tek sayi \n");
            tek_toplam += sayi;
        }
        printf("---------------------------------------\n");

        sayici += 1;
    }

    printf("TEK SAYILAR TOPLAMI : \t %d\n",cift_toplam);
    printf("CIFT SAYILAR TOPLAMI : \t %d\n",tek_toplam);


    return 0;
}
