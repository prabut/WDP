/*program system_7.c przelicza liczbę podawaną w systemie o podstawie 10, 
  na liczbę o podstawie 7*/

#include <stdio.h>
#include <math.h>

int main ()
{
 

  int j,d,s;
  int n;
  
  printf("Podaj liczbę w 10: ");
  scanf("%d",&n);
  j=n%7;
  n=(n-j)/7;
  d=n%7;
  n=(n-d)/7;
  s=n%7;
  printf("\n%d%d%d",s,d,j);
  return 0;
}

