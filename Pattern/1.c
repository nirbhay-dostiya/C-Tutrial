#include<stdio.h>
int main(){

// print the given pattern 
// * * * * *
// * * * *
// * * *
// * *
// *
    int num;
    printf("Enter the number of row : ");
    scanf("%d",&num);

// logic to print the given pattern
    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}