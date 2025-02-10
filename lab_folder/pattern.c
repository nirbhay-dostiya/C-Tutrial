#include<stdio.h>
int main(){

// print the given pattern 
// * * * * *
// * * * *
// * * *
// * *
// *
    int num;
    printf("Enter the number to print pattern : ");
    scanf("%d",&num);

// logic to print the given pattern
    for(int i=0; i<=num; i++){
        for(int j=i; j<=num; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}