
// C Program To Check Whether a Number is Prime or Not
#include <stdio.h>
int main(){
    int num, remainder=0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(int i=2; i<num; i++){
        if(num%i==0){
            remainder=1;
            break;
        }
    }
    if(remainder==0){
        printf("Given number is prime.\n");
    }
    else{
        printf("given number is not a prime.\n");
    }
    return 0;
}