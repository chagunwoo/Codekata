#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int small = arr[0];
    int index = 0;
    if (arr.size() <= 1)
    {
        answer.push_back(-1);
        return answer;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            index = i;
        }
    }
    arr.erase(arr.begin() + index);
    for (int i = 0; i < arr.size(); i++)
    {
        answer.push_back(arr[i]);
    }
    return answer;
}