//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//1. Find the largest number among the three numbers.
//####################################

#include <stdio.h> 
  
int main() 
{ 
    int a = 5, b = 2, c = 3; 

    //sol 1
    //if else conditions
    if ( a > b && a > c)
        printf("Sol 1: Largest Number: %d", a);
    else if (b > a && b > c)
        printf("Sol 1: Largest Number: %d", b);
    else
        printf("Sol 1: Largest Number: %d", c);


    //sol 2
    int largest_number;

    largest_number= (a > b )? a:b;
    largest_number= (largest_number > c )? largest_number:c;
    printf("\nSol 2: Largest Number: %d", largest_number);


    //sol 3
    int numbers [] = {a, b, c};
    //int largest_number;
    
    int n = sizeof(numbers) / sizeof(numbers[0]); 
    largest_number=numbers[0];
    for (int i = 1; i<n; i++){
        if (largest_number<numbers[i]) largest_number = numbers[i];
    }
    printf("\nSol 3: Largest Number: %d", largest_number);

    return 0;
}

