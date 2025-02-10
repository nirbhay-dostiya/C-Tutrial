#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string in lower case : ");
    // gets(str);
    scanf("%[^\n]s",str);
    printf("%s\n",str);
    // logic to convert lower case to upper case
    int len= strlen(str);
    for(int i=0; i<=len; i++){
        str[i] -= ('a' - 'A');
    }
    printf("%s", str);
    return 0;
}
// int i=0;
//     while (str[i] != '\0') {
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - ('a' - 'A');
//         }
//         i++;
//     }
//     printf("String in upper case : %s", str);