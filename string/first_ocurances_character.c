#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    char character;
    int store = -1;
    printf("Enter a string : "); 
    gets(str);
    printf("Enter number to first occurence : ");
    scanf("%c",&character);

    // logic to find first courances
    int digits = strlen(str);
    for(int i=0; i<= digits -1; i++){
        if(str[i] == character){
            store = i;
            break;     
        }
    }
    if(store == -1){
        printf("There is no any letter found in the given string.\n");
    }
    else{
        printf("%d is the first ocurance of %s\n",store, str);
    }

    return 0;
}