//Problem: Find the largest element in a given array.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
#include <vector>
using namespace std;



int find_Largest_Element (const vector<int>& nums){
    int largest_number = nums[0];
    int n=nums.size();

    for (int i = 1; i < n; i++){
        if (nums[i]>largest_number ){
            largest_number = nums[i];
        }
    }

    return largest_number;

}



int main() {
    vector<int> nums = {1, 2, 55, 4, 5};
    cout << "Largest element is: " << find_Largest_Element(nums) << endl;
    return 0;
}