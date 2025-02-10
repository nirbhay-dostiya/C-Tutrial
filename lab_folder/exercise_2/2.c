/* 2. Write a program to swap values of two variables with and without using third variable*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a,b, tem;
    printf("Enter two variable a, b : ");
    scanf("%d, %d" , &a,&b);
    //swap with help of third variable
 printf("The value of a, b before swap is : %d,%d \n" ,a, b);
 tem = a;
 a = b;
 b = tem;
 printf("The value of a, b after swap using third variable is : %d,%d \n" ,a, b);
   // swap without the help of third variable
 printf("The value of a, b before swap is : %d,%d \n" ,a, b);
 a = a + b;
 b = a-b;
 a = a-b;
 printf("The value of a, b after swap wwithout using third variable is : %d,%d \n" ,a, b);
getch();
}