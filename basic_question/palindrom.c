#include<stdio.h>
int main (){
// reveerse a number
   int num, reverse= 0, remainder, original;
   printf("Enter any integer : ");
   scanf("%d",&num);
   original=num;
   
   while(num !=0){
      remainder = num%10;
      reverse = reverse * 10 + remainder;
     num /= 10;
   }
   printf("reverse is : %d\n" , reverse);
   
//  check for palindrom number
   if(original == reverse){
      printf("The given number is palindrom.\n");
   } else
   printf("Given number is not a palindrom.\n");
   return 0;
}
