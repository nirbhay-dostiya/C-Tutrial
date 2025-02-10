/* Write a c program add two number (2 and 6) and display its sum.*/
#include<stdio.h>
#include<conio.h>

   void main() {    //main function call 
     int a, b, sum;     //declear variable 'a' , 'b' , sum
     a= 2, b=6;  //initialised the value of a and b
     sum  =  a + b;     //calculate sum of a and b 
     printf("The sum of a and b is : %d \n" , sum) ;  // print the value of sum
     getch(); //hold the screen
   }