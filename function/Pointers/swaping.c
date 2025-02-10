#include<stdio.h>
// pointers are used to store the address of variable. Denoted by (*)
/*
Swap two number , a & b for any randem value
*/

void swap(int a , int b);
void _swap(int* a, int* b);

int main() {
int x, y;
x = 3;
y = 5;


_swap(&x, &y);
printf("x = %d & y = %d\n" , x,y);


    return 0;
}

// Call by value
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
printf("a = %d & b = %d\n" , a,b);

}

// Call by refrence
void _swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
// printf("*a = %d & *b = %d\n" , *a,*b);

}