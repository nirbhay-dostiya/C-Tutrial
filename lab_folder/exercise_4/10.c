//10.	Write a program to generate Fibonacci series.
#include<stdio.h>
int main() {
    int num, t1=0,t2=1, nextterm;
    printf("Enter number of term : ");
    scanf("%d", &num);
//condation for generate fibonacci series
 printf("Fibonacci Series: %d\t%d\t", t1, t2);
    for(int i=3; i<=num; i++){
        nextterm = t1 + t2;
        printf("%d \t", nextterm) ;
        t1 = t2;
        t2 = nextterm;   
    }
    return 0;
}