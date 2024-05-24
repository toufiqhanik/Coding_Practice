//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//3. Write a C program to calculate Compound Interest.
//Note: 
//####################################

#include <stdio.h> 
#include <math.h> 


//equation: principal * (pow((1+rate/100), time)) - principal;
double compound_interest(double principal, double rate, double time){
    double CI;

    CI= principal * (pow((1+rate/100), time)) - principal;
    
    return CI;

}


int main() 
{ 
    // Principal amount 
    double principal = 15000;   
    // Annual rate of interest 
    // Haa Haa Pay your Credit Card ASAP!
    double rate = 29;   
    // Time Yearly
    double time = 2; 

    //Output
    double CI;

    CI=compound_interest(principal, rate, time);
    printf ("Compound Interest = %.4lf", CI);

    return 0;
}