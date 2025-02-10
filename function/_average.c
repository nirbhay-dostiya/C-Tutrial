#include<stdio.h>
// Write a program using function to find average of three number
   // average of a no. = sum of total no. divide by terms of no come

float average(int a, int b, int c);

int main()  {
int a, b, c; 
printf("Enter no. a :");
scanf("%d" , &a);
printf("Enter no. b :");
scanf("%d" , &b);
printf("Enter no. c :");
scanf("%d" , &c);

printf("Average is %.1f" , average(a, b, c));

    return 0;
}

float average(int a, int b, int c) {
return (a  + b + c) /3;
}

