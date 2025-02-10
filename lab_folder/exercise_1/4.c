
/* Write a c program to calculate area and circumference of circle.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
  void main() {
    float radius, area, circumferance; //declear variable
    printf("Enter the Radius of circle : "); // input radius from user
    scanf("%f" , &radius); // store the input value

    // Calculate the area of circle.
     area = 3.14 * radius * radius; //calculate area
     printf("Area of circle is : %f \n" , area); //print area 

     // Calculate the circumferance of circle.
     circumferance = 2 * 3.14 * radius; 
     printf("circumferance of circle is : %f \n" , circumferance); // print circumferance

     getch();

  }