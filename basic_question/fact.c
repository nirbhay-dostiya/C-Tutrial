#include<stdio.h>
int main () {
    int num, fact=1;
    printf("Enter number to print factorial : ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++) {
        fact = fact*i;
    }
    printf("factorial of %d is : %d\n",num,fact);
    return 0;
}