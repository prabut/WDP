#include<stdio.h>
	int main ()
{
	int wynik, wykladnik,w, podstawa;
	wynik=1;
	printf("\n\nPodaj podstawe do spotegowania: ");
	scanf ("%i", &podstawa);
	printf("Podaj wykladnik: ");
	scanf ("%i", &wykladnik);
	w=wykladnik;
	while (w>0) 
	{
		wynik=wynik*podstawa;
		w=w-1;
 	}

	printf("%i^%i= %i\n\n",podstawa,wykladnik,wynik);
	return 0;
}
