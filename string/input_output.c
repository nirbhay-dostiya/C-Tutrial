#include<stdio.h>
#include<string.h>

// input the string from user using gets()
int main() {
    char str[20];
    // puts("Enter any character :");    // puts & gets dono kud se ek \n kar deta h
    // gets(str);
    // puts(str);

// input output using scanf & printf
    printf("Enter any string :");
// scanf("%s",str);    // scanf me %s se print karne par pura word print nahi hoga sirf first word hi print hoga
    scanf("%[^\n]s",str);
    printf(" %s", str);
    return 0;
}