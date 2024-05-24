//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//4. Write a Program in C to Swap the values of two variables without using any extra variable.
//Note: 
//####################################

#include <stdio.h> 


int swaped_sol1( int x, int y){
    
}
  
int main() 
{ 
  
    int x = 158; 
    int y = -556; 
  
    printf("prob : Before: x: %d , y: %d\n", x, y); 

    //Sol 1 {10, 20}
    x=x+y; //30
    y=x-y; //30-20 =10
    x=x-y; //30-10 =20
    printf("Sol 1: Swaped: x: %d , y: %d\n", x, y);   

    x = 158; 
    y = -556; 

    //Sol 2 {10, 2}
    x=x-y; //8
    y=x+y; //8+2=10
    x=y-x; //10-8 =2
    printf("Sol 2: Swaped: x: %d , y: %d\n", x, y);    

    return 0;
}