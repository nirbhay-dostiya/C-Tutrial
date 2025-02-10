#include<stdio.h>
int main() {
    int n; 
    printf("Enter no. of row : ");
    scanf("%d", &n);
    // print the given pattern 
    // *******
    // *** ***
    // **   **
    // *     *
// print top star 
    for(int i=1; i<=(2*n-1); i++){
        printf("* ");
    }
    printf("\n");
    int nsp = 1; 
    int nst = n-1;
// print below star
   for(int i=1; i<=n-1; i++){
    for(int j=1; j<=nst; j++){
        printf("* ");
    }
     for(int k=1; k<=nsp; k++){
        printf("  ");
     }
     for(int j=1; j<=nst; j++){
        printf("* ");
    }
    nsp +=2; 
    nst--;
    printf("\n");
   }
    return 0;
}