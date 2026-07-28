#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool UpDown(int a, int b)
{
    return a > b;
}






long long solution(long long n) {
    vector<char> num;
    string s;
    s = to_string(n);
    string x;


    for (char a : s)
    {
        num.push_back(a);
    }
    sort(num.begin(), num.end(), UpDown);
    for (char a : num)
    {
        x += a;
    }


    long long answer = stoll(x);

    return answer;
}