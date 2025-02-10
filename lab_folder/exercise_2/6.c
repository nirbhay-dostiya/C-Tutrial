
/* 6.Write a program to find the largest of three numbers using ternary operators.*/
#include<stdio.h>
#include<conio.h>
void main() {
    int a,b, c, largest_no;
    printf("Enter three number a, b, c : ");
    scanf("%d, %d, %d" , &a, &b, &c);
// use of ternary operators   
 largest_no = (a>c && a>b) ? (a) : (b>c && b>a) ? (b):(c);
 printf("The greater number is : %d \n" , largest_no);//print the largest number
    getch();

}