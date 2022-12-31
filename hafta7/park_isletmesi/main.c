#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("10 araba icin sirasi ile saat yaziniz.\n");

    float ucretHesapla(int araba_adi, float saat)
    {
    float ucret;

    ucret = 2.00;


    if(saat>=3.00){ucret = 2.00+((saat - 3.00)*0.5);}


    printf("%d \t %.2f \t %.2f\n",araba_adi,saat,ucret);
    }

    printf("Araba \t Saat \t Ucret \n");
    int ad;
    float s;

    int i = 1;
    while(i<=10)
    {
    //rintf("saat yaziniz : \n");


    scanf("%f",&s);

    ucretHesapla(i,s);
    i++;
    printf("-----------");
    }







    return 0;
}
