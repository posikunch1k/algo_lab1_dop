#include "solution.h"

int apples_dividing(int n, int k) {
    if (n <= 0 || k < 0) {
       return -1;
    }
    return k % n;
}
