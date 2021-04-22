#include "div.h"
int digInNumber(int k)
{

    int ost = k%3;
    k=99+k/3;
   switch (ost) {
    case 0 :
       return k%10;
    case 1 :
       return (k+1)/100%10;
    case 2 :
       return (k+1)/10%10;
   }

   return k;
}
