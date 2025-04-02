#include <iostream>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4};

    for (int i = 1; i < nums.size();)
    {
        if (nums[i] == nums[i - 1])
        {
            nums.push_back(nums[i]);
            nums.erase(nums.begin() + i);
        }
        else
        {
            i++;
        }
    }

    for (int num : nums)
    {
        cout << num << " ";
    }
};