//Problem: Find the factorial.
// Md Toufiq Hasan Anik
//email: toufiqhanik@umbc.edu

#include <iostream>
#include <cinttypes>
using namespace std;



int64_t factorial (int x) {
    int64_t factorial_value = 1;

    while ( x != 0){
        factorial_value = factorial_value * x;
        x--;
    }

    return factorial_value;

}

int main (){
    int x;
    cout << "Give a integer number for factorial: " << endl;
    cin >> x;

    cout << "Fcatorial: " << factorial(x) << endl;

    return 0;
}