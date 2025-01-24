// Used to calculate the majority element
#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15, 11, 11, 15, 15, 7, 7, 7, 7};

    cout << "Majority element: " << majorityElement(nums) << endl;
    return 0;
}