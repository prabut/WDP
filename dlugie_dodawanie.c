#include <stdio.h>

int main ()

{
  int i,a_dl,b_dl,max,p;

  printf("\nPodaj długość pierwszej liczby: ");
  scanf("%i", &a_dl);

  printf("\nPodaj długość drugiej liczby: ");
  scanf("%i", &b_dl);
  
  if (a_dl<b_dl) max=b_dl;
   else max=a_dl;
  int a[max+1], b[max+1], wynik[max+1];
  for(i=max; i>=a_dl; i=i-1) a[i]=0;
  for (i=a_dl-1; i>=0; i=i-1) scanf("%1i",&a[i]);
  for (i=max; i>=b_dl; i=i-1) b[i]=0;
  for (i=b_dl-1; i>=0; i=i-1) scanf("%1i",&b[i]);
  p=0;
  for (i=0;i<=max; i=i+1)
    {
      wynik[i]=a[i]+b[i]+p;
	p=wynik[i]/10;
      wynik[i]=wynik[i]%10;
    }
      i=max;
      while (i>=0 && wynik[i]==0)
	i=i-1;
      if (i<0) printf("0");
      else
	while(i>=0)
	  {
	    printf("%i",wynik[i]);
	    i=i-1;
	  }

  return 0;
} 
