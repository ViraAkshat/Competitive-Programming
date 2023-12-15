#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int sortPivot(vector<int> &nums, int low, int high)
{
    int pivot = low;
    int left = low;
    int right = high;

    while (left < right)
    {
        while (nums[left] <= nums[pivot] && left < high)
        {
            left++;
        }
        while (nums[right] > nums[pivot] && right > low)
        {
            right--;
        }

        if (left < right)
        {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }
    }

    int temp = nums[right];
    nums[right] = nums[pivot];
    nums[pivot] = temp;

    return right;
}

void quick(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pivot = sortPivot(nums, low, high);
        quick(nums, low, pivot - 1);
        quick(nums, pivot + 1, high);
    }
}

int main()
{
    // input handling
    int n;
    cin >> n;

    string line;
    getline(cin >> ws, line);
    int data;
    vector<int> arr;
    stringstream nums(line);
    for (int i = 0; i < n; i++)
    {
        nums >> data;
        arr.push_back(data);
    }

    // sorting
    quick(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}