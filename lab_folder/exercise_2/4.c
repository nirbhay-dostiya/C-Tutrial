/* 4.Write a program to illustrate the use of unary prefix and postfix increment and decrement operators*/
#include <stdio.h>

int main() {
    int a , b, c,d;
    a=b=c=d=5;

    // Prefix increment
    printf("Prefix increment: %d\n", ++a); // a is incremented first, then printed (6)

     // Prefix decrement
    printf("Prefix decrement: %d\n", --b); // c is decremented first, then printed (4)


    // Postfix increment
    printf("Postfix increment: %d\n", c++); // b is printed first (5), then incremented

    // Postfix decrement
    printf("Postfix decrement: %d\n", d--); // d is printed first (5), then decremented

    // Printing the final values
    printf("Final values: a = %d, b = %d, c = %d,d = %d\n", a, b, c, d); // a=6, b=4, c=6, d=4

    return 0;
}
