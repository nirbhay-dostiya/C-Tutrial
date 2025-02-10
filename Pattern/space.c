#include<stdio.h>
int main() {
    int n;
    printf("Enter the nuber of term : ");
    scanf("%d",&n);

    // print space like pattern

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}