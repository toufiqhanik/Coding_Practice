//###################################
//solving https://www.geeksforgeeks.org/c-coding-interview-questions/
//Anik
//email: toufiqhanik@umbc.edu
//its for practice purposes to stay uptodate
//use on your own risk

//6. Write a Program to convert the binary number into a decimal number
//Note: 
//####################################

#include <stdio.h> 
  

int bin_to_decimal(int x){
    int dec_x=0;
    int pow=1;

    while (x !=0) {
        dec_x = dec_x + (x%10) * pow;
        x= x/10;
        pow =pow *2;
    }

    return dec_x;
}



int main() 
{ 
    int x= 101;
    int dec_x;

    dec_x=bin_to_decimal(x);
    printf ("Bin: %d, Decimal %d", x, dec_x);     
    
    

    return 0;
}
