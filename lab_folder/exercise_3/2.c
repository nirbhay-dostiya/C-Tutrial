/*2.	Write a program to compute grade of students using if else adder. The grades are assigned as followed:
a.	Marks	      Grade
b.	marks<50	    F
c.	50≤marks< 60	C
d.	60≤marks<70	    B
e.	70≤marks<80	    B+
f.	80≤marks<90	    A
g.  90≤mars≤ 100	A+
 */
#include<stdio.h>
#include<conio.h>

int main () {
    int marks;
    printf("Enter the marks of student :");
    scanf("%d" , &marks);

    if(marks >=90 && marks <100) {
        printf("A+");
    }
    else if (marks >=80 && marks <90){
        printf("A");
    }
    else if ( marks >=70 && marks <80) {
        printf("B+");
    }
    else if(marks >=60 && marks < 70) {
        printf("B");
    }
    else if(marks >= 50 && marks <60) {
        printf("C");
    }
    else
        printf("Fail");

    return 0;
}