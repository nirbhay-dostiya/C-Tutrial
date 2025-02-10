#include<stdio.h>

void printtable(int n);

int main () {
int n;
 printf("Enter number for print table : ");
 scanf("%d" , &n);

printtable(n);  //argument  or actual parameter
   return 0;
}

void printtable(int n) {      // parameter or formal parameter
   for (int i =1; i <= 10; i++) {
      printf("Table is : %d \n" ,i*n);
   }
}