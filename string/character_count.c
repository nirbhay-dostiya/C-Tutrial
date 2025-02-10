#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    printf("Enter paragraph : ");
    scanf("%[^\n]s",str);

    // count the letter in string
    int i=0, count=0;
    while(str[i] != '\0'){
        count ++;
        i++;
    }
    printf("%d", count);
    return 0;
}