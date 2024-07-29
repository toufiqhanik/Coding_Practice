//Problem: Find the first non-repeating character in a string.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
#include <unordered_map>
//#include <climits>
using namespace std;

char firstNonRepeatingCharacter2(const string& str) {
    unordered_map<char, int> charCount;
    for (char ch : str) {
        charCount[ch]++;
    }
    for (char ch : str) {
        if (charCount[ch] == 1) {
            return ch;
        }
    }
    return '\0';
}

char firstNonRepeatingCharacter(const string& str) {
    int count[256] = {0}; // Array to store count of characters

    // Count the occurrences of each character
    for (char c : str) {
        count[c]++;
        cout << c << endl;
        cout << count[(unsigned char)c] << endl;
    }

    // Find the first non-repeating character
    for (char c : str) {
        if (count[c] == 1) {
            return c;
        }
    }

    return '\0'; // Return null character if no non-repeating character is found
}

int findIndex(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Element not found
}



int main() {
    string str = "swiss";
    char result = firstNonRepeatingCharacter(str);
    if (result != '\0') {
        cout << "First non-repeating character is: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    return 0;
}
