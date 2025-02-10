#include<stdio.h>
int main(){

    int num;
    printf("Enter the term to print pattern : ");
    scanf("%d", &num);  
// print the given pattern for n term.  
// A 
// A B
// A B C
// A B C D
// A B C D E

// logic to printing the given patter

    for(int i=1; i<=num; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
            int d = a+64;
            char ch = (char)d;
            a++;
            printf("%c ",ch);
        }
        printf("\n");
    }
return 0;
}