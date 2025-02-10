// Write a C program to find maximum and minimum between two numbers using functions.
#include<stdio.h>
void minmax(int a, int b);

int main (){
    int m, n;
    printf("Enter two inter : ");
    scanf("%d %d",&m , &n);
    printf("1st number is %d\n2nd number is %d\n", m, n);
    minmax(m,n);
    return 0;
}

void minmax(int a, int b) {
    if(a<b) printf("%d is maximum number\n", b);
     else printf("%d is maximum number\n", a);
    
if(a<b) printf("%d is minumum number\n", a);
     else printf("%d is minumum number\n", b);

}