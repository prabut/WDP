#include <stdio.h>

#define S_W_R (3600*24*365);
#define S_W_D (3600*24);
#define S_W_H 3600;
#define S_W_M 60;

int main ()

{
  int sek, sekundy, lata, dni, godziny, min;

  printf("\nPodaj ile ilość sekund: ");
  scanf("%i", &sek);
  sekundy=sek;
  lata = sek / S_W_R;
  sek= sek % S_W_R;
  dni = sek / S_W_D;
  sek = sek % S_W_D;
  godziny = sek / S_W_H;
  sek= sek % S_W_H;
  min = sek / S_W_M;
  sek = sek % S_W_M;
  printf("\nTwoje  %i sek to %d l %d d %d godz. %d min %d sek. \n", sekundy, lata, dni, godziny, min, sek);
  return 0;
}
