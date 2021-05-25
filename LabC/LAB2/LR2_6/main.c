#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <cfunf.cpp>


int test_sum() {
    assert(funf(5,0.03) == 4);
    assert(funf(4,0.003) == 5);
    assert(funf(3, 0.005) == 5);
    return 0;
}
int main()
{
    double x = correctInput(), e = correctInput(), sum = 0;
    funf(x,e);
    test_sum();
    return 0;
}


