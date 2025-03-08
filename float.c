#include <stdio.h>
#define PI 3.14159f;
int main(void){
   
   // float - %f
//    float x = 3545.254f;
//    printf("float value = %f\n",x);

   // double - %lf
//    double y = 21545.265;
//    printf("Double value = %lf\n",y);
    
    // long double - %Lf
    // long double z = 1464644.2646;
    // printf("Long double value = %Lf\n",z);


    // float plank_length = 10.0f;
    // float piece_count = 4.0f;
    // float piece_length;
    // piece_length = plank_length/piece_count;
    // printf("A %8.2f plank foot can be cut into %5.0f pieces %6.2f feet long.\n",
    // plank_length, piece_count, piece_length);

    // program 2.8
    
     float circumference = 0.0f;
     float diameter = 0.0f;
     float radius = 0.0f;
     float area = 0.0f;
     float const pi = 3.15159f;
     printf("please!Enter the diameter(2.3):");
     scanf("%f",&diameter);
     radius = diameter/2.0f;
     circumference = 2.0f*pi*radius;
     area = pi*radius*radius;
     printf("Circumference : %.2f\n",circumference);
     printf("Area : %.2f\n",area);

// float radius = 0.0f; // The radius of the table
//  float diameter = 0.0f; // The diameter of the table
//  float circumference = 0.0f; // The circumference of the table
//  float area = 0.0f; // The area of the table
//  float Pi = 3.14159265f;
//  printf("Input the diameter of the table:");
//  scanf("%f", &diameter); // Read the diameter from the keyboard
//  radius = diameter/2.0f; // Calculate the radius
//  circumference = 2.0f*Pi*radius; // Calculate the circumference
//  area = Pi*radius*radius; // Calculate the area
//  printf("\nThe circumference is %.2f", circumference);
//  printf("\nThe area is %.2f\n", area);

    return 0;
} 