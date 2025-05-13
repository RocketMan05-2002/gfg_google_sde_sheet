// array is unosrted. create a wiggle pattern

#include <iostream>
using namespace std;
void wiggleSort(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); ++i)
    {
        if ((i % 2 == 1 && nums[i] < nums[i - 1]) ||
            (i % 2 == 0 && nums[i] > nums[i - 1]))
        {
            swap(nums[i], nums[i - 1]);
        }
    }
}
int main()
{
    vector<int> arr{3, 5, 2, 1, 6, 4};
    wiggleSort(arr);
    for (auto it : arr)
        cout << it << " ";
    return 0;
}