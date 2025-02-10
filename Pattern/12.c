#include<stdio.h>
int main() {
    int n; 
    printf("Enter no. of row : ");
    scanf("%d", &n);
// print the given pattern
// * * * * 
// *     *
// *     *
// * * * *
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 ||j==1 || i==n ||j==n){
                printf("* ");
            }else printf("  ");
        }
        printf("\n");
    }
    return 0; 
}