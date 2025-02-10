
/* 5. Write a program to input two numbers and display the maximum number */
#include<stdio.h>
#include<conio.h>

void main() {
    int a,b;
    printf("Enter two number a , b : ");//Input two number
    scanf("%d , %d" , &a , &b);

 if(a>b){
    printf("%d is maximum number from a and b \n" ,a);//condition checking 
 }
 else{
    printf("%d is maximum number from a and b \n" , b);//condition checking
 }
getch();
}