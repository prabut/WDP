/**********************************************************************************************
 * Program kwad_sumy.c oblicza sume kwadratow n wyrazow. Liczba n jest podawana z klawiatury. *
 * n nalezy do liczb naturalnych.							      *
 **********************************************************************************************/

#include <stdio.h>
		
int main()
	{
		int n, suma;
		
		printf("\n\nPodaj liczbę n: ");
		scanf("%d",&n);
		suma=((n*(n+1))*((2*n)+1))/6;
		printf("Suma kwadratow liczby %d wynosi: %d\n\n",n,suma);
		return 0;
	}
