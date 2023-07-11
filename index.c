#include <stdio.h>  //input and output 
#include <stdbool.h> // boolean
#include <string.h> //sting functions

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


    /***-------C Constants-------*/

    const int minutesPerHour = 23;
    const float PI = 3.14;

    printf("%f", PI);

    int p = 20;

    p += 5; // 25

    printf("%i\n", p);


    /***-------Sizeof Operator-------*/

    // dealing with size of opeartor use "%lu" as the specifier

    int IntSample;
    float FloatSample;
    double DoubleSample;
    char CharSample; 

    printf("%lu\n", sizeof(IntSample));
    printf("%lu\n", sizeof(FloatSample));
    printf("%lu\n", sizeof(DoubleSample));
    printf("%lu\n", sizeof(CharSample));


    // It was introduced in C99, and you must import the following header file to use it:
    //#include <stdbool.h>


    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun);   // Returns 1 (true)
    printf("%d\n", isFishTasty);        // Returns 0 (false)


    /***-------if statement-------*/

    int myAge = 4;
    int vottingAge = 18;

    if(myAge >= vottingAge){
        printf("Old enough to vote");
    }else{
        printf("Under age \n");
    }
    
    int number = 10;

    if(number > 0){
      printf("The value is positive \n");
    }else if(number < 0){
      printf("The value is negative \n");
    }else{
      printf("The value is 0 \n");
    }

    ///(Ternary Operator)

    int time = 20;

    (time < 18) ? printf("GOOD DAY") : printf("GOOD EVENING \n");


  /***-------switch case-------*/

  int day = 4;

    switch (day) {
      case 1:
        printf("Monday \n");
        break;
      case 2:
        printf("Tuesday \n");
        break;
      case 3:
         printf("Wednesday \n");
        break;
      case 4:
         printf("Thursday \n");
        break;     
    }


    /***-------loops-------*/
    int i = 0;

    while(i < 5){
      printf("%i \n", i++);
    }

    do {

      printf("%i \n", i);

    }while(i < 5);


    for(int g; g < 10; g++){
      printf("%i\n", g);
    }

    int ea;
    for(ea = 4; ea < 10; ea++){
      printf("%i\n", ea);
    }


    //break - it stops the execusion of a loop,  can also be used to jump out of a loop.

    int dz;
    for(dz = 0; dz < 10; dz++){
      if(dz == 5){
        printf("Loop stops at: %i\n", dz);
        break;
      }
    }


//The continue statement breaks/skip one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

    int r;

    for(r = 0; r < 10; r++){
      if(i == 4){
        continue;   //This example skips the value of 4:
      }

      printf("%i\n", r);
    }

    int t = 0;

    while(t < 10){
      if(t == 4){
        t++;
        continue;
      }

      printf("%i\n", t);
      t++;
    }

    /***-------Arrays-------*/

    int firstArray[] = {23, 45, 65, 100};
    //change array element value 
    firstArray[2] = 77;

    printf("%i \n", firstArray[2]);   //77

    //loop through array

    int eacharray;

    for(eacharray = 0; eacharray < 4; eacharray++){
      printf("array value %i\n", firstArray[eacharray]);
    }

    //create array by setting Array Size 

    int secondArray[5];

    //add elements
    secondArray[0] = 22;
    secondArray[1] = 42;
    secondArray[2] = 25;
    secondArray[3] = 55;
    secondArray[4] = 67;

    printf("fourth element %i\n", secondArray[3]);


    /***-------C Multidimensional Arrays-------*/
    //Two-Dimensional Arrays - A 2D array is also known as a matrix (a table of rows and columns).

    //the first dimension represents the number of rows[2] while the second represents columns[3]


                        
                        //column[0]   column[1]   column[2]
     //first row [row[0]]   1             4           2
     //second row [row[2]]  3             6           8 
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    // to print 2 that row[0] and column[2]

    printf("%i \n", matrix[0][2]);   // Outputs 2


    /***-------Strings-------*/
    //Strings are used for storing text/characters.
    //C does not have sting type to create string you will create an array of characters using the char

    char greetings[] = "Hello World";

    printf("%s", greetings);


    /***-------Arrays-------*/

    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 26

    printf("%i\n", strlen(alphabet));


    // Concatenate str2 to str1 (result is stored in str1)

    char str1[20] = "Hello";
    char str2[] = "World!";

    strcat(str1, str2);

    //print str1
    printf("%s\n", str1);



  /***-------INPUT-------*/
  // To get input, you can use the scanf() function:


    // Create an integer variable that will store the number we get from the user
    int userNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    //Get and save the number the user type 
    scanf("%i", &userNum);

    //Out the number the user typed 
    
    printf("Your number is: %i\n", userNum);


    int userNum2;
    char userChar;

    printf("What is your number and character\n");

    scanf("%d %c", &userNum2, &userChar);

    printf("Your number is %i and chracter is %c\n");

    char firstname[30];

    printf("Enter your first name\n");

    scanf("%s", firstname);

    //output the text
    printf("Hello %s\n", firstname);


}