/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> //Include the standard library

/*
Int: integer = number
char: character
byte: 0-255
boolean: true or false, 1 or 0
void: nothing
*/

int main()
{
    printf("Hello World");
    printStars();
    
    return 0;
}

int printStars() {
    int count = 5;
    for (count = 5; count >= 0; count--) { //start, condition, change
        printf("*");
    }
    return 0;
}
