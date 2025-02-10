#include<stdio.h>
int main() {
    int c1,c2,r1,r2;
    printf("Enter the row of 1st matrix :");
    scanf("%d",&r1);
    printf("Enter the column of 1st matrix :");
    scanf("%d",&c1);

    int a[r1][c1];
// Input first matrix from the user
    printf("Enter the the element of 1st matrix \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the row of 2st matrix :");
    scanf("%d",&r2);
    printf("Enter the column of 2st matrix :");
    scanf("%d",&c2);

  int b[r2][c2];
// Input second matrix from the user
    printf("Enter the the element of 2nd matrix \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d", &b[i][j]);
        }
    }
    int add[r1][c1];

//Printing first martix 
    printf("First matrix is : \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
// Printing second matrix 
    printf("Second matrix is : \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
// adding matrix a and matrix b. 
        for(int i=0; i<r1; i++){
            for(int j=0; j<c1; j++){
                add[i][j] = a[i][j] + b[i][j];
            }
        }
//printing the add of matrix a and matrix b.
    if(r1==r2 && c1==c2){
        printf("Add of first and second matrix is : \n");
        for(int i=0; i<r2; i++){
           for(int j=0; j<c2; j++){
            printf("%d ", add[i][j]);
           }
           printf("\n");
        }
    }
    else{
        printf("Order are not same for given matrix.");
    }

    return 0;
}