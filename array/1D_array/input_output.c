#include<stdio.h>
// Input number with help of array
int main() {
    int n;
    printf("How much number want to store in array :");  // take size of array
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n; i++){    // input number from user
        printf("Enter %d number :" , i+1);
        scanf("%d" ,&arr[i]);
    }
    printf("You have inter given number in array is :");
    for(int i=0; i<n; i++){      // Output/print the input number
        printf(" %d \t" ,&arr[i]);
    }
    return 0;
}