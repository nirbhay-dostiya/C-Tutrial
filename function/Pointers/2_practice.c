#include<stdio.h>

/*
Write a function to calculate the sum , product & average of two numbers. Print average in main function.
*/

void dowark(int a, int b, int *sum, int *prod, int *avg);

int main () {
int a = 5 , b = 3;
int sum, prod, avg;

dowark(a, b, &sum, &prod, &avg);

// printf("sum = %d, prod = %d, avg = %d\n" ,sum, prod, avg);   // for all value
printf("avg = %d\n" , avg);
    return 0;
}

void dowark(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
     *prod = a*b;
     *avg = (a + b)/2;
} 
     