#include<stdio.h>
	int main ()
	{
	  int n, a, b, p;
	  n=0; a=1; b=0;
	  printf("Podaj liczbe: ");
	  scanf("%i", &p);
	  while (n<p) 
	  {
		  b = b+a; a = a+2; n = n+1;
    }
    printf("\n %i^2 == %i\n\n", p, b);
	  return 0;
	}
