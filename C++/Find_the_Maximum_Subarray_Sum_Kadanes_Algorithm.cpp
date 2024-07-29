//Problem: find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(const vector<int>& nums) {
    int max_so_far = nums[0];
    int max_ending_here = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        cout << "Array Element: " << nums[i] << endl;
        max_ending_here = max(nums[i], max_ending_here + nums[i]);
        cout << "max_ending_here: " << max_ending_here << endl;
        max_so_far = max(max_so_far, max_ending_here);
        cout << "max_so_far: " << max_so_far << endl << endl;
    }
    return max_so_far;
}

int main() {
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums2 = {1};
    vector<int> nums3 = {5, 4, -1, 7, 8};

    cout << "Maximum subarray sum for example 1: " << maxSubArraySum(nums1) << endl;
    cout << "Maximum subarray sum for example 2: " << maxSubArraySum(nums2) << endl;
    cout << "Maximum subarray sum for example 3: " << maxSubArraySum(nums3) << endl;
    return 0;
}
