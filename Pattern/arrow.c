#include<stdio.h>
int main() {
    int n = 15;
        for(int i=1; i<=n; i++){
            // for(int j=1; j<=i; j++){
            //     printf(" * ");
            // }

            //space ke liye h 
            int space = 2*(n-i);
            for(int j=1; j<=space; j++){
                printf("  ");
            }

            //ye phir se star print karega
            for(int j=1; j<=i; j++ ){
                printf(" *");
            }
            printf("\n");
        }

        for(int i=n; i>=1; i--){
            // for(int j=1; j<=i; j++){
            //     printf(" * ");
            // }

            //space ke liye h 
            int space = 2*(n-i);
            for(int j=1; j<=space; j++){
                printf("  ");
            }

            //ye phir se star print karega
            for(int j=1; j<=i; j++ ){
                printf(" *");
            }
            printf("\n");
        } 
        
    return 0;
}