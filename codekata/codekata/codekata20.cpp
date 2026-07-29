#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool solution(int x) {
    int temp;
    int sum = 0;
    for (temp = x; temp > 0; temp /= 10) {
        sum += temp % 10;
    }
    return (x % sum == 0);
}