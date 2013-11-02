#include <stdio.h>
int main()
{
  int liczba, i,j, a[1000];
  i=0;
  printf("\nPodaj %i  liczbe: ",i);
  scanf("%i", &liczba);
  while (liczba>=0)
	{
	  a[i]=liczba;
          i=i+1;
          printf("Podaj %i liczbe; ",i);
	  scanf("%i",&liczba);
	}
  for (j=i-1; j>=0; j=j-1)
    {
      printf("[%i] ",a[j]);	   
    }
 printf("\n\n");
 return 0;
}
