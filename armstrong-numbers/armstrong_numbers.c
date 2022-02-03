#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {
    if (candidate ==0) return true;
    int digits =0;
    int n = candidate;
    do {
        n /= 10;
        ++digits;
    } while (n>0);
    int sum =0;
    int c = candidate;
    while (c > 0) {
        sum += pow((c%10), digits);
        c/=10;
    }
    return (sum == candidate);
}
