
/* Write a c program to performe addition , subtraction , division
     and multiplication of two number. */
#include<stdio.h>
#include<conio.h>
void main() {

    int a , b , add , sub , mult;
    float div;
    printf("Enter two number a , b :");
    scanf("%d ,%d" , &a, &b);

    add = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;

    printf("\n Addition of a & b is : %d, \n Subtraction of a & b is : %d, \n multiplication of a * b is : %d, \n Division  of a &b is : %f \n" , add,sub, mult,div);
    getch();
}