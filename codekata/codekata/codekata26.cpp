#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    vector<string> star;
    for (int i = 0; i < phone_number.size() - 4; i++)
    {
        star.push_back("*");
        answer += star[i];
    }
    answer += phone_number[phone_number.size() - 4];
    answer += phone_number[phone_number.size() - 3];
    answer += phone_number[phone_number.size() - 2];
    answer += phone_number[phone_number.size() - 1];
    return answer;
}