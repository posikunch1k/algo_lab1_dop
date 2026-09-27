#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "solution.h"

int main() {
    assert(count_kopecks(2, 50, 3) == 50);  //7 руб. и 50 коп.
    assert(count_kopecks(1, 25, 4) == 0);   //5 руб. и 0 коп.
    assert(count_kopecks(0, 99, 2) == 98);  //1 руб. и 98 коп.

    printf("Все тесты пройдены успешно!");
    return 0;
}