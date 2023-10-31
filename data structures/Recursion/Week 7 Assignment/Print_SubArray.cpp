#include <iostream>
#include <vector>

using namespace std;

void printSubarray(vector<int> &nums, int start, int end)
{
    // base case
    if (end == nums.size())
    {
        start = start + 1;
        end = start;
    }

    if (start == nums.size())
    {
        return;
    }

    // 1 case sol.

    for (int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    printSubarray(nums, start, end + 1);
}


int main()
{
    vector<int> nums{1, 2, 3, 4, 5};
    printSubarray(nums, 0, 0);
    return 0;
}