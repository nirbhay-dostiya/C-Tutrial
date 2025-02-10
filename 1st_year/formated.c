#include<stdio.h>

/* formaated function -->in this user print according to you */
// printf() & scanf() are used in formated funtion to input and output .

void main() {
    int a;
    printf("enter any any natural number : ");
    scanf("%d" , &a); // uses of scanf() function to scan the input to further operation.
    
    printf("a is : %d \n" , a); //uses of printf() function to print the output result .
    printf("address of a is : %u" , &a);
}