#include <stdio.h>
#include <locale.h>
int main( ) {
/* Aktif yerel ayarlar */
printf("%s\n", setlocale(LC_ALL, NULL));
printf("%.2f\n", 1275.46);
/* Yerel ayarlar� T�rk�e'ye �evirme */
printf("%s\n", setlocale(LC_ALL, "Turkish"));
printf("%.2f\n", 1275.46);
/* Yerel ayarlar� �ngilizce'ye �evirme */
printf("%s\n", setlocale(LC_ALL, "English"));
printf("%.2f", 1275.46);
return 0;
}
