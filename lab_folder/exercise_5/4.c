/* Write a program to swap two integers using call by value and call 
 by reference methods of passing arguments to a function */
#include<stdio.h>

void swap(int a ,int b);
void swap_(int *a , int *b);

int main() {
    int m, n;
    printf("Enter two integer : ");
    scanf("%d %d", &m, &n);

    printf("first No. is : %d\nsecond No. is : %d\n",m,n); 
    swap(m,n);
    printf("first No. after call by value : %d\nsecond No. after call by value : %d\n",m,n);
    swap_(&m,&n);
    printf("first No. after call by reference : %d\nsecond No. after call by reference : %d\n",m,n);
    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b; 
    b = temp;
}

void swap_(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}