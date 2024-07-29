//Problem: Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// solution 1: total_sum_of_vector - sum(vector) 
int find_missing_num (const vector<int>& nums) {
    int n= nums.size();
    int total = (n*(n+1))/2;

    cout << "Total: " <<  total << endl;

    int sum =0;

    for (int i =0; i < n; i++){
        sum +=nums[i];
    }

    int missing_number = total - sum;

    return missing_number;
}

//soluion 2:  check 1 by one;

int find_missing_num_v2 (const vector<int>& nums) {
    int n= nums.size();

    for (int i =0; i < n+1; i++){
        if (i != nums[i]){
            return i;
        }

    }

    return 0;
}

int main () {
    vector<int> nums = {0, 1, 3, 4, 5};

    int missing_number = find_missing_num (nums);
    //cout << "In : " << nums << endl;
    cout << "Out1: " << missing_number << endl;


    missing_number = find_missing_num_v2 (nums);
    //cout << "In : " << nums << endl;
    cout << "Out2: " << missing_number << endl;

    return 0;
}