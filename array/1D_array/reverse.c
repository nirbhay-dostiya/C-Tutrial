#include<stdio.h>
// reverse of an array 

int main() {

    int arr[4];

    for(int i=0; i<4; i++){      // input array
        scanf("%d" , &arr[i]);
    }
    printf("Array before reverse is : ");   // output array
    for(int i=0; i<4; i++){
        printf("%d \t" , arr[i]);
    }
    printf("\nArray after reverse is : ");    //reversr of array
    for(int i=3; i>=0; i--){
        printf("%d \t" , arr[i]);
    }
}