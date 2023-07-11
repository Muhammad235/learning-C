#include <stdio.h>

//This conatins the solution to MTE201 2021/2022 past question

int main(){

    //SECTION B

    /*----Question One------*/
    //a) for loop

    int i;
    for(i = 0; i < 5; i++){
         printf("%i\n", i);
    }
    
    //b) i) Pointers allows us to store the memory address of a variable in another variable ii) it enhance the execution speed of a program




    //c) Area and VolPointersume of a cylinder  V= pi.r*2 h  A= 2pirh + 2pir*2

    int radius; 

    printf("What is the radius of the cylinder in mm?");
    scanf("%d", &radius);

    int height;

    printf("What is the height of the cylinder in mm?");
    scanf("%d", &height);

    float Volume = (float) 3.14 * radius*radius * height;

    printf("The Volume is %lf mm\n", Volume); 

    float Area = (float) 2 * 3.14 * radius * height + 2 * 3.14 * radius*radius;

    printf("The Area is %lf mm\n", Area);

   return 0; 
}


