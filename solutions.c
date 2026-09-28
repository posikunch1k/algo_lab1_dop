#include <math.h>
#include <stdio.h>

//Задача 1
int count_kopecks(int a, int b, int n) {
    return ((a * 100 + b) * n) % 100;
}