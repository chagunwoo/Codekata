#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
vector<int> solution(long long n) {
    vector<int> answer;
    stack<int> st;
    string s = to_string(n);

    for (char c : s)
    {
        int a = c - '0';
        st.push(a);
    }
    while (!st.empty())
    {
        answer.push_back(st.top());
        st.pop();
    }
    return answer;
}