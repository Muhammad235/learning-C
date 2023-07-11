#include <stdio.h>

int main(){

    //fgets() function
    //function to read a line of text.
    //Use the scanf() function to get a single word as input, and use fgets() for multiple words


    //memory address is the location of where a variable is stored in the computer 
    //When we assign a value to the variable, it is stored in this memory address.

    int number = 120;

    printf("%p\n", &number);   //000000814B7FFCBC

    //&number is refered to as a  "pointer"
    // A Pointer is a variable that stores the memory address of another variable as its values, to print pointer values we use the "%P" format specifier.

    //Pointer allows us to manipulate the data in the computer's memory.  

    int value = 34;

    // a pointer variable that stores the address of value
    int* pointer = &value;

    printf("The value is %i and the memory address is %i \n", value, pointer);



}