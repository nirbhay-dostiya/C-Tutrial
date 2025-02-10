#include<stdio.h>
int main() {

    int m,n;
    printf("Enter the row of a matrix : ");
    scanf("%d",&m);

    printf("Enter the column of a matrix :");
    scanf("%d",&n);

    printf("Enter the element of matrix : ");
    int a[m][n];
// Input matrix from the user..............>
    for(int i=0;i<m; i++){
        for(int j=0;j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
// print the given matrix by the user  --------------->
printf("\nYou inter given matrix : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
// print the transpose of the given matix 
printf("\n Transpose of the matrix is : \n");
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        printf("%d", a[i][j]);
    }
    printf("\n");
   }
    return 0;
}