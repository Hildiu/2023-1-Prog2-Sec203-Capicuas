//
// Created by mbermejo on 14/04/2023.
//

#include "UFunciones.h"


long long int invertirNumreo(long long int num)
{
  long long int ni=0, dig;
  while(num!=0)
  {
      dig = num % 10;
      ni = ni*10 + dig;
      num = num/10;
  }
  return ni;
}

/*
     num            ni
     1234           0
       123          0*10 + 4 = 4
        12          4*10 + 3 = 43
         1           43*10 + 2 = 432
         0           432*10 + 1 = 4321
 */