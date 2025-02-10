
/* Write a program to evaluate each of the following equation 
   (i) v = u + at  
   (ii) s = ut + 1/2at*t  
*/
#include<stdio.h>
#include<conio.h>
void main() {

    float u, a, t , v, s; //declear variable
printf("Enter the value of u, a, t : "); // input the value of u, a, t
scanf("%f, %f, %f" , &u, &a, &t); //store in memory
    v = u + a * t; //calculate final velocity 
    s = (u * t) + (0.5 * a * t * t); //calculate displacment
printf("Final velocity is : %f \n" , v);  //print final velocity 
printf("Displacment is : %f \n" , s);  //print displacment
    getch();
    // end the main program
}