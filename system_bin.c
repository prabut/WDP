/*program system_2.c przelicza liczbę podawaną w systemie o podstawie 10,
na liczbę o podstawie 2*/

#include <stdlib.h>
#include <stdio.h>
 
void dec_to_bin(int liczba)
{
  int i=0, tab[31] , j;
 
  while(liczba) //dopóki liczba będzie różna od zera
  {
    tab[i++]=liczba%2;
    liczba/=2;
  }
  for(j=i-1;j>=0;j--)
    printf("%d",tab[j]);
}
 
int main()
{
  int liczba;
 
  printf("Podaj liczbę: ");
  scanf("%d", &liczba);
 
  printf("%d po zamianie na postać binarną: ", liczba);
  dec_to_bin(liczba);
  
  printf("\n");
 
  return 0;
}
