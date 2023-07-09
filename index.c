#include <stdio.h>

int main(){

    printf("hello world \n");
    printf("This is C \n");


  /***-------variables-------*/

    //Create variables 
    int myNum = 15;
    float myFloat = 3.444;
    char myletter = 'W';

    //A format specifier starts with a percentage sign %

    //Print variables
    printf("%i\n", myNum);  // %i - int 
    printf("%f\n", myFloat); //%f - float
    printf("%c\n", myletter); //%c - character


    printf("my number is: %i\n", myNum);
    printf("My number is %i and my character is %c\n", myNum, myletter);

    int declareNum; 

    declareNum = 102;

    printf("%i \n", declareNum);


    /***-------Arithmetics-------*/

    int x = 5;
    int y = 13;

    int sum = x + y;


    printf("summ = %i\n", sum);

    //declaring multiple variable
    int b = 12, c = 6, d = 4;

    printf("%i \n", b * c * d);


    /***-------set decimal prcision-------*/

    float myFloatNum = 3.5;
    double myDoubleNum = 54.66;

    // Default will show 6 digits after the decimal point


    printf("%f \n", myFloatNum);      // Outputs 3.500000
    printf("%lf \n", myDoubleNum);   // Outputs  54.660000


    //If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

    printf("%.1f \n", myFloatNum); // Only show 1 digit
    printf("%.2f \n", myFloatNum); // Only show 2 digit

    printf("%.1lf \n", myDoubleNum); // Only show 1 digit
    printf("%.2lf \n", myDoubleNum); // Only show 1 digit


    /***-------Type Conversion-------*/

    //*Implicit Conversion (automatically)
    //*Explicit Conversion (manually)

    // Automatic conversion: int to float
    float intTofloat = 9;

    printf("intTofloat: %f \n", intTofloat); // 9.000000

    // Automatic conversion: float to int
    int floatToint = 4.54;

    printf("floatToint: %d \n", floatToint);


    //Explicit Conversion (manually)

    // Manual conversion: int to float

    float value = (float) 5 / 2;

    printf("%f \n", value); // 2.500000
    printf("%.1f \n", value); // 2.500000


    
}