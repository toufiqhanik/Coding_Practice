//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//2. Write a Program to check whether a number is prime or not. 
//Note: solution at https://www.geeksforgeeks.org/c-coding-interview-questions/ is wrong!! 
//My code: Solved it efficiently.
//####################################

#include <stdio.h> 

//if N is divisable between 2 to N/2 then its a prime otherwise not
//Exceptions:
// 1. x < 3 && x>0 are prime =1; 
// 2. iteration should not go more than 99 as 503 will go till 251 iterations which are redundents. Checking til 99 iteration is max.
int is_it_prime (int x){
    int prime = 1; 

    if (x < 3 && x>0) prime =1;
    else{
        for (int i = 2; i<= x/2 && i<=99; i++){
            //printf ("Checking %d\r\n", i);
            if ( x % i ==0 ){
                prime = 0;
                printf ("Divisable by %d !!!! So....\r\n", i);
                break;
            }
        }
    }

    return prime;
}
  
int main() 
{ 
    int N = 368947; 
    int prime; 
    
    //Sol 1
    prime = is_it_prime (N);
    (prime)? printf ("It is a Prime number.\n") :  printf ("It is not a Prime number.\n");

    //Sol2 
    //Will be added;
    return 0;
}