//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//5. Write a Program to Replace all 0’s with 1’s in a Number.
//Note: 
//####################################

#include <math.h> 
#include <stdio.h> 
  

int replace_0s_to_1s(int N){
    //sol 1
    int ans = 0; 
    int x = 0; 
    while (N !=0){
        ans= (N % 10 != 0) ? ans + (N % 10) * pow (10,x): ans + 1*pow (10,x);    

        N = N/10;
        x++;
        }
    return ans;
}



int main() 
{ 
    int N = 2500043; 
    

    int converted;    

    printf ("Before: %d \n", N);   
    converted=replace_0s_to_1s(N);
    printf ("After:  %d \n", converted);
    

    return 0;
}
