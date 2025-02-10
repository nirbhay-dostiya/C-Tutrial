#include<stdio.h>
int main() {

    int n;
    printf("Enter odd number of row : ");
    scanf("%d",&n);
    int a=n-2;
    // print the given pattern
    // 1 
    // 123
    // 12345
    // 123
    // 1
 // logic to print the given pattern 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(2*i)-1; j++){
            if(i<= n/2 +1){
                printf("%d",j);
            }
        }
        if(i>n/2+1){
                for(int k=1; k<=a; k++){
                    printf("%d", k);
                }
                a-=2;
            }
       printf("\n"); 
    }
    return 0;
}
