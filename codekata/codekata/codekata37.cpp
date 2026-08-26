#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int multi = 1;
    vector<int> v;

    while (n > 0)
    {

        v.push_back(n % 3);
        n /= 3;
    }

    for (int i = v.size() - 1; i >= 0; --i)
    {
        answer += v.back() * multi;
        v.pop_back();
        multi *= 3;
    }

    return answer;
}