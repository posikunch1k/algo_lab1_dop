#include <assert.h>
#include <stdio.h>
#include "solution.h"

int main() {

    assert(apples_dividing(3, 10) == 1);
    assert(apples_dividing(5, 20) == 0);
    assert(apples_dividing(7, 55) == 6);
    assert(apples_dividing(1, 0) == 0);
    assert(apples_dividing(0, 10) == -1);
    assert(apples_dividing(-5, -10) == -1);

    printf("Тесты пройдены успешно!");
    return 0;
}