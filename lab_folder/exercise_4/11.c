/*11.	If a four-digit number is input through the keyboard, write a 
         program to obtain the sum of the first and last digit of this number.*/
//  #include<stdio.h>
//  int main(){
//     int num,first, last;
//     printf("Enter four digit number : ");
//     scanf("%d", &num);
// //sum of first and last digits number
//      first =  num % 10;
//      last = num / 1000;
//      int sum = first + last;
//      printf("The sum of first & last digits of %d is : %d ",num,sum);
     
//     return 0;
//  }      

//general code for every digits of number
#include<stdio.h>
int main() {
    int n,num , d=1 ;
    printf("Enter any digit of number : ");
    scanf("%d",&n);
    num = n;
    while(num!=0){
        num/=10;
        d*=10;
    }
    d /= 10;
    int first = n/d;
    printf("first digit is %d\n", first);
    int last = n % 10;
    printf("last digit is %d\n", last);
    int sum = first + last;
    printf("%d", sum);


    return 0;
}