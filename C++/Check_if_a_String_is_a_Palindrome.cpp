//Problem: heck if a given string is a palindrome.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
using namespace std;



bool is_Palindrome (const string& str){
    int n =str.length();

    for (int i = 0; i < n / 2; i++){
        if (str[i] != str [n-i-1]){
            return false;
        }
    }

    return true;
}

int main (){

    string str = "raceedcar";
    
    cout << str << (is_Palindrome(str) ? " is Palindrome." : " is not Palindrome.") << endl;

    return 0;

}