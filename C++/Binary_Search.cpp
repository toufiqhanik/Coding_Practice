//Problem: Implement binary search to find the index of a target value in a sorted array.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
#include <vector>
using namespace std;


int binarySearch (const int arr[], int size, int target){
    int left = 0, right = size -1;
    int mid;

    while (left <= right){
        mid = left + (right - left) / 2;

        if (arr[mid]== target){
            return mid;
        } 
        if(arr[mid] > target){
            right = mid-1;
        }else {
            left = mid+1;
        }

        cout << "Left: " << left << " Right: " << right << endl;

    }

    return -1;
}

int binarySearch2(const int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}



int main() {
    const int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 49};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 49;
    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}