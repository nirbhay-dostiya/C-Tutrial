#include<stdio.h>
int main(){

    int num;
    printf("Enter the term to print pattern : ");
    scanf("%d", &num);
    int nst =1;
// print the given pattern for n term.
//        *
//      * * *
//    * * * * *       
//  * * * * * * *
// * * * * * * * * *
// logic to printing the given patter
    for(int i=1; i<=num; i++){
        // space print
        for(int j=i; j<=(num-1); j++){
            printf("  ");   
        }
        // star print
        for(int k=1; k<=nst; k++){
                printf("* ");
            }
        nst = nst +2;
        printf("\n");
    }
return 0;
}