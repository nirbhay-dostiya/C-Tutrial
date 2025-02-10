#include<stdio.h>
int main(){

    int num;
    int nst;
    printf("Enter the term to print pattern : ");
    scanf("%d", &num);  
//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1

// logic to printing the given patter
    for(int i=1; i<=num; i++){
        // for space
        for(int j=i; j<=num-1; j++){
            printf("  ");
        }
        // for number
        for(int k=1; k<=i; k++){
            printf("%d ",k);
        }
        // extra print 
        int a=i-1;
        for(int l=1; l<=i-1; l++){
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }
return 0;
}