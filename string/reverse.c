#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    printf("Enter any Name :");
    scanf("%[^\n]s", name);

// letter count
    int i=0, count=0; 
    while(name[i] != '\0'){
        count ++;
        i++;
    }
// logic for reverse string
    for(int j=0,k=count-1; j<=k; j++, k--){
        char temp = name[j];
        name[j] = name[k];
        name[k] = temp;
    }
    printf("%s", name);
    return 0;
}