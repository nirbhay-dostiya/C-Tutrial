#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {
   // Write a c program to convert decimal number into binary number 
   int decno;
printf("Enter a decimal number :: ");
scanf("%d" ,&decno);

for (decno=0;decno>=10; decno++){
    if(decno==0){
        printf("1");
    }
    else if(decno==1){
        printf("2");
    }
    else if(decno==2){
        printf("4");
    }
}


return 0;
}