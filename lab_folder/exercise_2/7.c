
/* 7.Write a program to find the roots of quadratic equation.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {

    int xsquare, x , constant ;
    float root_1, root_2;
    printf("Enter the value of xsquare, x , and constant : ");
    scanf("%d,%d,%d" , &xsquare,&x,&constant);
printf("Your quadratic equation is : (%dx^2) + (%dx) + (%d) \n", xsquare, x, constant);
//  a = cofficent of x^2 ,b = cofficent of x, c = constant
    int b, a, c;
    a = ("%d" , xsquare);
    b = ("%d" , x);
    c = ("%d" , constant);
// Calculate the root of given quadratic
root_1 = ((-b) + pow(pow(b,2) - 4*a*c, 0.5)) / 2*a;
root_2 = ((-b) - pow(pow(b,2) - 4*a*c, 0.5)) / 2*a;
   
    printf("Root of given quadratic is : %f & %f \n" ,root_1,root_2);//print roots of quadratic
getch();

}