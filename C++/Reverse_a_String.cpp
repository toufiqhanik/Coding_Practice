//Problem: Reverse a given string.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <algorithm>
#include <iostream>
using namespace std;

string resverve_String_algo (const string& str){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}


string reverseString  (const string& str ){
    string reversed = str;
    int n= reversed.length();

    for (int i =0; i < n/2; i++) {
        swap(reversed[i], reversed[n-i-1]);
    }

    return reversed;
}


int main () {

    string str ="Hi I am anik.";

    //solution 1
    string str_reversed = resverve_String_algo (str);

    cout << "In : " << str << endl;
    cout << "Out: " << str_reversed << endl;

    //solution 2
    str_reversed = reverseString (str);

    cout << "In : " << str << endl;
    cout << "Out: " << str_reversed << endl;

    return 0;
}