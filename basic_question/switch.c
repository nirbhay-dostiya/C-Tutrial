# include<stdio.h>

int main() {

/* int day;
printf("Enter day (1-7) = ");
scanf("%d" , &day);

switch (day) {
    case 1: printf("Monday\n");
            break;
    case 2: printf("Tuesday\n");
            break;
    case 3: printf("Wednesday\n");
            break;
    case 4: printf("Thrusday");
            break;
    case 5: printf("Friday\n");
            break;

    case 6: printf("Saturday\n");
            break;
    case 7: printf("Sunday\n");
            break;
    default : printf("not a valid date");
} */
int num;
printf("enter a number :" );
scanf("%d" , &num);

if(num >= 0){
    printf("positive no\n");
    if(num % 2 == 0){
        printf("even\n");
    }
    else {
        printf("odd\n");
    }
}
 else {printf("negative\n");
 }
    



    return 0;
}