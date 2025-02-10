#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of row : ");
    scanf("%d",&n);
    int a=1,b=1;

// upper portion of diamond
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=n; k++){

            if(i+k==2*n){
                printf("* ");
            }
            else{
                printf(" ");
            }
            a++;
            b++;
        }
        printf("\n");
    }
    return 0;
}