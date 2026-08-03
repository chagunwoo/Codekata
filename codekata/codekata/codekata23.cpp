#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> seoul) {
    string answer;
    auto it = find(seoul.begin(), seoul.end(), "Kim");
    if (it != seoul.end())
    {
        int index = it - seoul.begin();         // 1. 정수형 인덱스 구하기 (2)
        string str_index = to_string(index);
        answer = "김서방은 " + str_index + "에 있다";
    }

    return answer;
}