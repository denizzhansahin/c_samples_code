#include <stdio.h>
#include <stdlib.h>


int main()
{
  char deniz[]="merhaba benim adim denizhan.";
  int sayi = 0;

  while (deniz[sayi] != '\0')
    sayi++;

  printf("benim yazdigim cumlenin uzunlugu: %d\n", sayi);

  return 0;
}
