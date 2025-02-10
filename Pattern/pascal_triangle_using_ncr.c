#include<stdio.h>

int factorial(int a);
int combination(int x,int y);
int main() {

    int n;
    printf("Enter the no. of row :");
    scanf("%d",&n);
   
// logic to print pascal triangle
    for(int i=0; i<=n; i++){
        for(int k=0; k<=n-i; k++){     // for space printing
            printf(" ");
        }
        for(int j=0; j<=i; j++){            // for number printing
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }

    return 0;
}
// function for factorial calculation
int factorial(int a){
    int fact=1;;
    for(int i=2; i<=a; i++){
        fact *=i;
    }
    return fact;
}

// function for combination calculation
int combination(int x, int y){
    int ncr = factorial(x)/(factorial(y) * factorial(x-y));
    return ncr;
}