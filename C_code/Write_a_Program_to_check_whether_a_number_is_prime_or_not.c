//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//2. Write a Program to check whether a number is prime or not..
//####################################

#include <stdio.h> 

//if N is divisable between 2 to N/2 then its a prime otherwise not
int is_it_prime (int x){
    int prime = 1; 

    if (x < 3 && x>0) prime =1;
    else{
        for (int i = 2; i<= x/2; i++){
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
    int N = 37; 
    int prime; 
    
    //Sol 1
    prime = is_it_prime (N);
    (prime)? printf ("It is a Prime number.\n") :  printf ("It is not a Prime number.\n");



    return 0;
}