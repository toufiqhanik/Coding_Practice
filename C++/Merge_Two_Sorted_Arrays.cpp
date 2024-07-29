//Problem: Merge two sorted arrays into a single sorted array.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;
    cout << result.size() << endl;
    size_t i = 0, j = 0;
    
    while (i < arr1.size() && j < arr2.size()) {

        cout << arr1[i] << " : " << arr2[j] << endl;
        if (arr1[i] < arr2[j]) {
            cout << "Added: " << arr1[i] << endl;
            result.push_back(arr1[i++]);
            
        } else {
            cout << "Added: " << arr2[j] << endl;
            result.push_back(arr2[j++]);
        }

           
    }

    cout << i << " -- " << j << endl;

    while (i < arr1.size()) {
        result.push_back(arr1[i++]);
    }

    while (j < arr2.size()) {
        result.push_back(arr2[j++]);
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8, 9, 10};
    vector<int> merged = mergeArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    cout << merged.size() << endl;

    return 0;
}
