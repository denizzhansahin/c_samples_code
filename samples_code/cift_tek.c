#include <stdio.h>
#include <stdlib.h>

int main()
{


    int sayi;

    printf("PROGRAMDAN CIMKAK ICIN LUTFEN 0 YAZINIZ\n");
    printf("---------------------------------------\n");

    while(sayi!=-1)
    {
        printf("---------------------------------------\n");
        printf("BIR SAYI YAZ: \t");
        scanf("%d",&sayi);
        printf("-----\n");
        if(sayi%2==0)
        {
            printf("cift sayi \n");
        }
        else{
            printf("tek sayi \n");
        }
        printf("---------------------------------------\n");
    }


    return 0;
}
