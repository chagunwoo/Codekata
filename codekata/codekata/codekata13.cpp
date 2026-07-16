#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int sum = 0;
    int temp = n;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
    {
        sum += temp % 10;
        temp = temp / 10;
    }
    int answer = sum;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    return answer;
}