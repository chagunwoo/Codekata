#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> nums = { 1,2,3,4,5,6,7,8,9,0 };
    for (int i = 0; i < numbers.size(); i++)
    {
        int a = find(nums.begin(), nums.end(), numbers[i]) - nums.begin();
        nums.erase(nums.begin() + a);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        answer += nums[i];
    }



    return answer;
}