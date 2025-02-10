#include<stdio.h>
#include<conio.h>
#include<math.h>

void main() {
    float amount, pamount, rate , time , ci;
    printf("Enter pamount , rate ,time ");
    scanf("%f , %f , %f " , &pamount, &rate , &time);

    amount = pamount*pow((1+rate/100),time);
    printf("The amount is : %f /n " ,amount);
     
ci = amount -pamount;
printf("compound intrest is : %f /n" , ci);


    getch();
}