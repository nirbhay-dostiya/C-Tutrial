#include<stdio.h>
int main(){

    int num;
    printf("Enter the term to print pattern : ");
    scanf("%d", &num);  
// print the given pattern for n term.  
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// logic to printing the given patter

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}