#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
double mdl(int a)
{
    if(a<0)
        return a*-1;
    else
        return a;
}
int fact(int f)
{
    int i = 1;
    if(f <= 0)
        return 1;
    double ft = 1;
    while (f != i)
    {
        ft*=i;
        i++;
    }
    return ft;
}
double power(double value, int pwr)
{
    if(pwr == 0)
        return 1;
    pwr--;
    if(pwr > 0)
        while (pwr!=0)
        {
            value*=value;
            pwr--;
        }
    else
        while (pwr!=0)
        {
            value/=value;
            pwr++;
        }
    return  value;
}
int correctInput()
{
    int num;
    while (scanf("%d",&num) != 1)
    {
            printf("\n ? ");
            while(getchar() != 10);
    }
    return num;
}

int funf(double x, double e)
{
    double sum = 0;
    double sinValue;
    sinValue = sin(x);
    int n = 0;
    long stck = 0;
    while(1)
    {
        stck =-mdl(sinValue)+mdl(sum);
        if(stck < e && n != 0)
        {
            printf("%d",n);
            break;
        }
        sum+=(power(-1,n)*power(x,2*n - 1)/fact(2 * n - 1));
        n++;
    }
    return n;
}
