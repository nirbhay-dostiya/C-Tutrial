#include<stdio.h>
#include<conio.h>

int main() {
    int arr[2][2];
    int brr[2][2];
// input for arr
printf("Enter arr value : ");
   for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    // input for brr
    printf("enter brr value : ");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++){
            scanf("%d" , &brr[i][j]);
        }
    }
    //print arr
    printf("\n");
    printf("arr is : ");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j]);
        }
    }
    //print brr
    printf("\n");
    printf("brr is : ");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++){
            printf("%d " , brr[i][j]);
        }
    }
    //print sum of arr and brr
    printf("\n");
    printf("sum of arr & brr is : ");
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++){
            printf("%d " , arr[i][j] + brr[i][j]);
        }
    }
    return 0;
}