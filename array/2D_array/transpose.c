#include<stdio.h>
int main() {

    int r,c;
    printf("Enter the row of a matrix : ");
    scanf("%d",&r);

    printf("Enter the column of a matrix :");
    scanf("%d",&c);

    printf("Enter the element of matrix : ");
    int a[r][c];
// Input matrix from the user..............>
    for(int i=0;i<r; i++){
        for(int j=0;j<c; j++){
            scanf("%d",&a[i][j]);
        }
    }
// print the given matrix by the user  --------------->
printf("\nYou inter given matrix : \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
// // Logic (1) for the transpose of the given matix if row and column are equal
//    for(int i=0; i<r; i++){
//     for(int j=0; j<=i; j++){
//         int swap = a[i][j];
//         a[i][j] = a[j][i];
//         a[j][i] = swap;
//     }
//    }
// // printing the transpose of the given matrix
//    printf("Transpose of given matrix : \n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//Logic (2) for the transpose of the given matix 
printf("Transpose of given matrix : \n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}