// 4.	Write a program to print day name using switch case.
#include<stdio.h>
int main() {
    int day;
    printf("Enter 1 - 7 no. for day name : ");
    scanf("%d" ,&day);

switch (day) {   
    case 1:
    printf("Monday "); 
        break;
    case 2:
    printf("Tuesday"); 
        break;
    case 3:
    printf("Wednesday"); 
        break;
    case 4:
    printf("Thrusday"); 
        break;
    case 5:
    printf("Friday"); 
        break;
    case 6:
    printf("Suturday"); 
        break;
    case 7:
    printf("Sunday"); 
        break;
    
    default:printf("Not a valid date");
        break;
    }
    return 0;
}