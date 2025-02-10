#include<stdio.h>
int main(){

    int num;
    printf("Enter the term to print pattern : ");
    scanf("%d", &num);

    // print the given pattern for n term.
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
// logic to printing the given patter

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
return 0;
}