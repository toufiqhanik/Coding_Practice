//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//7.Write a Program to check if the year is a leap year or not.
//Note: 
//####################################


#include <math.h> 
#include <stdio.h> 
  

void leap_year(int x){
    
    if (x % 4 == 0)
        printf ("%d: Its a leap Year\n" , x);
    else 
        printf ("%d: Its is not a leap Year\n", x);
}



int main() 
{ 
    
    leap_year(2000); 
    leap_year(2002); 
    leap_year(2008); 
    leap_year(2001); 
    

    return 0;
}
