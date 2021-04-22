#include "div.h"

#include <stdio.h>
#include "div.h"
#include <assert.h>

int test_sum() {
    assert(digInNumber(5) == 0);
    assert(digInNumber(4) == 1);
    assert(digInNumber(3) == 0);
    return 0;
}
#undef main
//int main() {}
