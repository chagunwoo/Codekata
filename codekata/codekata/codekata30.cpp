#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int temp = 0;
    for (int i = left; i <= right; i++)
    {
        int sum = 0;
        int temp = 0;
        for (int j = 1; j <= right; j++)
        {
            if (i % j == 0)
            {
                sum += 1;
                temp = j;
            }
        }
        if (sum % 2 != 0)
        {
            temp *= -1;
        }
        answer += temp;
    }
    return answer;
}