#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool down(char a, char b)
{
    return a > b;
}


string solution(string s) {
    string answer = "";
    vector<char> v;

    for (char& c : s)
    {
        v.push_back(c);
    }
    sort(v.begin(), v.end(), down);
    for (int i = 0; i < v.size(); i++)
    {
        answer += v[i];
    }

    return answer;
}