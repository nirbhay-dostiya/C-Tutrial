#include<stdio.h>

int main() {

int age = 7;
int *ptr = &age;
printf("ptr = %u\t" , ptr);
ptr++;
printf("ptr = %u\t" ,ptr);

    return 0;
}