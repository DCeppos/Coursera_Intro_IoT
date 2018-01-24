/**************** INSTRUCTIONS *******************/

/********************
Write a program in C that computes and prints out the first six digits in the Fibonacci sequence. 
You will need to look up the definition of the Fibonacci sequence if you don't know it. The first 
two numbers in the sequence are 0 and 1, but your program should compute the next four digits. 
Turn in your C program. Your C program must compile in order for it to be tested.
*********************/




#include <stdio.h>



int main(){



int x = 0, y = 1, fib = 0;


printf("%i%i",x,y);    



for (int i = 0; i < 4; i++){

    fib = x + y;    
    
    x = y;    
    
    y = fib;    
    
    printf("%i",fib);    
    

}


}


