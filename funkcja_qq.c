/*-1 w wyniku oznacza błąd !!*/
#include <stdio.h>

int qq (int n, int k)
{
  int i, zm_pom;
  if (n<0||k<=0)
    return -1;
  else
    {
       if (n==0) return 0;
       else
	 {  
	   zm_pom=0;
	   for (i=0; i<=k-1; ++i)
	     zm_pom=zm_pom+i*i;
           return qq(n-1,k)+zm_pom;
	 }
    }      
}

int main()
{
  int liczba;
  int k,n;
  printf("Podaj liczby: ");
  scanf("%d%d", &n,&k);
  liczba = qq(n,k);
  printf("Wynik= %d", liczba);
  printf("\n");
  return 0;
}
