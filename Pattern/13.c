#include<stdio.h> 
int main() {

    int num;
    printf("Enter the no. of row to print the pattern : ");
    scanf("%d", &num);
    int a= num;

// print the given pattern 
// 12345
// 23451
// 34512
// 45123
// 51234

// logic to print the given pattern
    for(int i=1; i<=num; i++){
        for(int j=i; j<=a; j++ ){
            printf("%d", j);
        }
        for(int k=1; k<=i-1; k++){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}