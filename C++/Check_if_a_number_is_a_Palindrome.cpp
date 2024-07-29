//Problem: heck if a given string is a palindrome.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
using namespace std;



bool is_Palindrome (int n){
    int digit;
    int rev = 0;
    int input_number =n;

    while (input_number > 0){
        digit = input_number % 10;
        rev = (rev * 10) +  digit;
        input_number = input_number/10;
        cout << rev << endl;
    }

    cout << "Input is :" << n << endl;
    cout << "Output is:" << rev << endl;
    if (n== rev){
        return true;
    } else {
        return false;
    }
}

int main (){

    int n=12385321;
    
    cout << (is_Palindrome(n) ? " is Palindrome." : " is not Palindrome.") << endl;

    return 0;

}