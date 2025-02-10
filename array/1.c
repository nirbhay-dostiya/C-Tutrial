#include<stdio.h>
#include<conio.h>
 // reverse of an array
int reverse(int arr[], int n);
void printarrayafterreverse(int arr[] , int n);
void printarraybeforereverse(int arr[] , int n);

int main() {
    int arr[] = { 1,2,3,4,5,6,7};
    printf("Array before reverse is :");
    printarraybeforereverse(arr,7);
    reverse(arr, 7);
    printf("Array after reverse is :");
    printarrayafterreverse(arr,7);

    return 0;
}

int reverse(int arr[], int n) {
    for(int i=0; i<n/2; i++){
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[i] = secondvalue;
        arr[n-i-1] = firstvalue;
    }
}

void printarrayafterreverse(int arr[] , int n) {
    for(int i=0; i<n; i++) {
        printf("%d \t" ,arr[i]);
    }
    printf("\n");
}

void printarraybeforereverse(int arr[] , int n) {
    for(int i=0; i<n;i++){
        printf(" %d \t" , arr[i]);
    }
    printf("\n");
}