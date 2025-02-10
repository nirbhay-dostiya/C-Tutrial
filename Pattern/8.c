#include<stdio.h>
int main() {

    int n;
    printf("Enter row number : ");
    scanf("%d",&n);
// print given pattern
//    A B C D 
//     A B C 
//      A B 
//       A

    for(int i=n; i>=1; i--) {
        // print spaces
        for(int j=i; j<=n-1; j++){
            printf(" ");
        }
        // print element
        for(int k=1; k<=i; k++){
            int a = 64+k;
            char ch = (char)a;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}