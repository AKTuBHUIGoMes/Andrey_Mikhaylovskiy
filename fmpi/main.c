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

    scanf("%d", &k);
    k = digInNumber(k);
    printf("%d", k);

    test_sum();
    printf("complete");
    return 0;


    return 0;
}
