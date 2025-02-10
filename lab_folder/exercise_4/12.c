//12.Write a program to find GCD (greatest common divisor or HCF) and LCM (least common multiple) of two numbers
#include<stdio.h> 
int main() {
    int num1,num2, largest, smallest , HCF, LCM;
    printf("Enter num1, num2 : ");
    scanf("%d %d" , &num1,&num2);

    printf("First number: %d\n", num1);
    printf("Second numbar: %d\n", num2);
// calculate smallest number using ternery operator 
    smallest = (num1 < num2) ? num1 : num2 ;
// calculate HCF of given number
    for(int i = 1; i<= smallest; i++) {
        if((num1 % i == 0) &&(num2 % i == 0)) {
            HCF = i;
        }
    }
// calculate LCM of given number
    LCM = (num1 * num2) / HCF;
// print the LCM and HCF values
    printf("HCF of given number is : %d\n" , HCF);
    printf("LCM of given number is : %d\n" , LCM);
    return 0;
}