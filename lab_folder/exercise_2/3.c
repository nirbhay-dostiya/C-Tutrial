/* 3.Write a c program to display the size of every data type using “sizeof” operator.*/
#include <stdio.h>
#include<conio.h>
int main() {
    printf("Size of char: %u bytes\n", sizeof(char));
    printf("Size of int: %u bytes\n", sizeof(int));
    printf("Size of float: %u bytes\n", sizeof(float));
    printf("Size of double: %u bytes\n", sizeof(double));
    printf("Size of short: %u bytes\n", sizeof(short));
    printf("Size of long: %u bytes\n", sizeof(long));
    printf("Size of long long: %u bytes\n", sizeof(long long));
    printf("Size of unsigned int: %u bytes\n", sizeof(unsigned int));
    printf("Size of unsigned char: %u bytes\n", sizeof(unsigned char));
    printf("Size of unsigned short: %u bytes\n", sizeof(unsigned short));
    printf("Size of unsigned long: %u bytes\n", sizeof(unsigned long));
    printf("Size of unsigned long long: %u bytes\n", sizeof(unsigned long long));
getch();
return 0;
}
