/* Write a program to calculate simple intrest and compoud intrest. */
#include<stdio.h> 
#include<conio.h>
#include<math.h>
void main() {
int p, r, t; //p is principle amount, r is rete of intrest , t is time
float A, si,  ci; // A is accumalated amount after t year , si is simple intrest , ci is compound intrest

printf("Enter the value of p, r, t : ");
scanf("%d, %d, %d" , &p, &r, &t) ;
//calculate simple intrest
   si = (p * r * t) / 100;    //mathematic operation 
   printf("The value of simple intrest is : %f \n" ,si);  //print the value of simple intrest
//calculate compound intrest 
   A = p *pow((1+r*0.01), t); //mathematic operation
   ci = A - p;
   printf("The value of compund intrest is : %f \n" ,ci);  //print the value of comound intrest
getch();
// end of main program
}