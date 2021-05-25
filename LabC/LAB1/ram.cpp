#define _CRT_SECURE_NO_WARNINGS
#include "div.h"

int correctInput()
{
    int num;
    while (scanf("%d",&num) != 1)
    {
            printf("\n yodovin ");
            while(getchar() != 10);
    }
    return num;
}

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
