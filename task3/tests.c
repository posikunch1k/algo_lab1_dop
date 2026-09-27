#include "solution.h"
#include <assert.h>
#include <stdio.h>

int main() {
    assert(meters_to_kilo(6767) == 6);
    assert(meters_to_kilo(2533) == 2);
    assert(meters_to_kilo(239) == 0);
    printf("All tests passed successfully!\n");
    return 0;
}
