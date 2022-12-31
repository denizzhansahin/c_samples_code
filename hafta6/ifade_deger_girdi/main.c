#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    printf("kac sayi toplayacaksin : ?\n");
    scanf("%d",&i);
    int sayi;
    int toplam = 0;
    for(int a=1;a<=i;a++){
        printf("----------");
        printf("sayi yaz: \n");
        scanf("%d",&sayi);
        toplam+=sayi;
        printf("----------");

    };

    printf("TOPLAM SAYI: %d\n",toplam);
    return 0;
}
