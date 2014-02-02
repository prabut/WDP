#include<stdio.h>
#include<math.h>


double ciag ( double n)
{
  if (n==0) return 2;

  else if (n==1) return 5;
  else return 5* ciag(n-1) - 6* ciag(n-2);
}






int main()
{
 double i ,n;
for ( i=0;i<50;i++)
  {
    printf("\n%.0lf\t %.0lf",i, pow(2,i)+pow(3,i));
printf("\t %-10.0lf", ciag(i));

 

  }
 
 printf("\n");


  return 0;
}
