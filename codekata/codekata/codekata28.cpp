#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int temp = s.size() / 2;
    int temp2 = s.size() % 2;
    if (temp2 != 0)
    {
        answer += s.substr(temp, 1);
    }
    else
    {
        answer += s.substr(temp - 1, 2);
    }
    return answer;
}