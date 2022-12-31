#include <stdio.h>
#include <stdlib.h>

int main()
{
int g(void) {
printf ("g Fonksiyonun içi\n");
int h(void) {
printf ("h fonksiyonun içi\n");
}

h();
}

g();


int toplam(int x, int y) {
int sonuc;
sonuc = x + y;
}

int d = toplam(4,5);
printf("%d\n",d);


void carpim(void) {
int a, b, c, sonuc;
printf ("Üç tamsayı girin.: ");
scanf("%d%d%d", &a, &b, &c);
sonuc = a * b * c;
printf ("Sonuc %d\n", sonuc);
return sonuc;
}

carpim();


int toplam2() {
    int n = 12;
    if (n == 0)
    return 0;
    else{
        n + toplam2(n-1);
        printf("%d\n",n);
    }

}
}


