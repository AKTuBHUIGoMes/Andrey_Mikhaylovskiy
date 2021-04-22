#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <div.h>
#include <div.cpp>
#include <ram.cpp>
 // для возможности использования scanf



int main()
{
    int k;
    k = correctInput();
    k = digInNumber(k);
    printf("%d", k);
    test_sum();
    printf("\ncomplete");
    return 0;
}
