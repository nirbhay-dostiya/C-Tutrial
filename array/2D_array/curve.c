#include<stdio.h>

int main() {

    int m,n;
    printf("Enter the row of matrix : ");
    scanf("%d",&m);
    printf("Enter the column of matrix : ");
    scanf("%d", &n);

    int a[m][n];
// input matrix 
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d" ,&a[i][j]);
        }
    }
// print curve pattern of the given matrix 
   
    for(int i=0; i<n;i++){
         if(n%2 == 0){
        for(int j=0; j<m; j++){
            printf("%d ", a[i][j]);
        }
    }
    else{
    for(int k=m-1;k>=0; k--){
        printf("%d " , a[i][k]); 
    }
   }
   printf("\n");
   }

    return 0;
}