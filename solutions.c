#include <math.h>
#include <stdio.h>

//Задача 1
int count_kopecks(int a, int b, int n) {
    return ((a * 100 + b) * n) % 100;
}

//Задача 2
int apples_dividing(int n, int k) {
    if (n <= 0 || k < 0) {
       return -1;
    }
    return k % n;
}

//Задача 3
int meters_to_kilo(int meters) {
    return meters / 1000;
}
