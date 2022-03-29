#include <stdio.h>
#include <stdlib.h>

int main()
{
  double factoriel (double N)
     {

      if (N==0)
      {
       return 1;
      }
      else
      {
       return N*factoriel(N-1);
      }

     }
  double rslt,x;

  printf("Donnez moi un nombre positif   ");
  scanf ("%lf",&x);
  rslt=factoriel(x);
  printf("le resultat est:  %lf",rslt);

return 0;
}
