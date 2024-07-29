#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "Hello world from Aniks C++ practice!\n"; // or << end1 can be used;
    cout << "Have a good day!\n\n";

    int myNum = 15;
    myNum = 10;
    cout << myNum <<" newline\n";

    double myFloatNum = 5.99;
    char myLetter = 'D';

    string myText = "Hello";
    bool myBool = true;

    int myAge = 30;
    cout << "\nI am " << myAge << " years old.\n"; // << used for concatinating string

    int x=1, y=2, z= 3;
    cout << x+y+z << "\n";

    const string myName = "Anik";
    //myName = "Inaaya"; //constance cxan not be changes so invalid
    cout << "My name is " << myName << "\4n";

    //cout << "Type the number: ";
    //cin >> x;

    //cout  << "Type another Number: ";

    //cin >> y;

    //int sum = x+y;

    //cout << "Sum  is: " << sum <<"\n";

    //bool = 1byte
    // char = 1 byte
    // int = 2 or 4 bytes
    // float = 4 bytes
    // double = 8  bytes

    float f1 = 35e3;
    double d1 = 12E4;

    cout << f1 << "\n";
    cout << d1<< "\n";

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
    cout << "\nThe size of the txt string is: " << txt.size() << "\n";
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers)/ sizeof(int);

    struct {
    int myNum;
    string myString;
    } myStructure;

    
    myStructure.myNum = 1;
    myStructure.myString = "woWW!";

    
    cout << "\n" << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    string food = "Pizza";

    for ( int i= 0; i<100; i++){
        cout << &food << "\n"; // Outputs 0x6dfed4
        if (food != "Pizza"){
            cout << "corrupted" << "\n";
            break;
        };
    }

    
    return 0;
}