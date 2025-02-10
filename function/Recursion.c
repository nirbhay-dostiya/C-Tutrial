// #include<stdio.h>

// void printtable(int n);

// int main() {
// int n , table;
// printf("Enter  number : ");
// scanf("%d" ,&n);

// printtable(n);

//     return 0;
// }

// void printtable(int n) {
//     for (int i=1; i<=10; i++) {
//         printf("%d \n" ,i*n);
//     }

// }

//Write a recursion function to calculate the sum of furst n natural number.
   
#include<stdio.h>

int sumofnnaturalno(int n);

int main() {

int n =5;
printf("sum is: %d" ,sumofnnaturalno(n));

    return 0;
}

int sumofnnaturalno(int n) {
    if(n == 1) {
        return 1;
    }
    int sumofnm1 = sumofnnaturalno(n -1);
   int sumofnnaturalno = sumofnm1 +n;
}
 

