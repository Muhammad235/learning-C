#include <stdio.h>

//This conatins the solution to MTE201 2021/2022 past question

int main(){

    //SECTION B

    /*----Question Two------*/
    //a) do-while
    
    int number;
    int sum;

    do{
      printf("Enter a number?");
      scanf("%d", &number);
     
      sum += number; 

    }while(number > 0);

        printf("Sum = %d", sum);
    
    //b)i) it helps to break down the execusion of codes ii) 
    //c) i) to build applications and software
       

   return 0; 
}