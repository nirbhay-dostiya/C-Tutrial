#include<stdio.h>
int main(){

    int num;
    printf("Enter the term to print pattern : ");
    scanf("%d", &num);
    int nst;

// print the given pattern for n term
//  * * * * * * *
//    * * * * *
//      * * *
//        *

// logic to printing the given patter
    for(int i=1; i<=num; i++) {
        // print space
        for(int j=1; j<=i; j++){
            printf("  ");
        }
        // print star
        for(int k=i; k<num; k++){
            printf("* ");
        }
        for(int k=i; k<=num; k++){
            printf("* ");
        }
        printf("\n");
    }
return 0;
}

//  Second method to print reverse of pyramid 
//           for(int i=num; i>=1; i--) {

//         // print spaces 
//         for(int j=1; j<= num-1; j++){
//             printf("  ");
//         }
//         // print stars 
//         for(int k=1; k<=i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//         }






