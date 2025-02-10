#include<stdio.h>
#include<stdbool.h>

int main() {
    int arr[5] = {2,7,4,5,3};

    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0; i<4; i++){
        bool flag = true;       // Let array is shorted
        for(int j= 0; j<4-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}