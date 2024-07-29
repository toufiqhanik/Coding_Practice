//Problem: Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <size_t N>
int find_missing_num (const int (&nums)[N]){
    int n= N;
    int total = (n*(n+1))/2;

    cout << "Total: " <<  total;

    int sum =0;

    for (int i =0; i < n; i++){
        sum +=nums[i];
    }

    int missing_number = total - sum;

    return missing_number;
}


int main () {
    const int nums[] = {0, 1, 2, 3, 4, 5, 7 };

    int missing_number = find_missing_num (nums);
    cout << "In : " << nums << endl;
    cout << "Out: " << missing_number << endl;

    return 0;
}