//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//8. Write a program to Factorial of a Number.
//Note: Remeber the factorial can generate buffer overflow.
// Having a big space fro the type will help.
// instead of int. we used "unsigned long long"!
//####################################

#include <stdio.h> 
  

unsigned long long factorial(int x){
    unsigned long long factorial_x=1;
    
    while  (x !=0){
        factorial_x=factorial_x*x;
        x--;
    }

    return factorial_x;
}



int main() 
{ 
    int x= 13;
    unsigned long long factorial_x;

    factorial_x=factorial(x);
    printf ("Number: %d, Its Factorial: %lld", x, factorial_x);     
    
    

    return 0;
}
