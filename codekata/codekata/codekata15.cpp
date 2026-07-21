#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool currect = false;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 1 and !currect)
        {
            answer = i;
            currect = true;
        }
    }

    return answer;
}