#include <stdio.h>
#include <stdlib.h>




int main()
{

    int okunmus_gun = 0;
    int okunan_gun = 1;
    int sayfa_sayisi = 1000;
    int her_gun_okunan_sayfa = 10;

    while (her_gun_okunan_sayfa < sayfa_sayisi+5 ) {
      printf("Okunan gun: %d  \t Okunan sayfa: %d \n", okunan_gun,her_gun_okunan_sayfa);
      okunan_gun+=1;
      her_gun_okunan_sayfa +=5;
    }



    return 0;
}
