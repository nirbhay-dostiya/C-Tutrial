//print a table from 2 to 10 using array
#include<stdio.h>

void storetable(int *table ,int number, int n);

int main () {
    int table[3][10];
    storetable(table[0], 3, 10);
    storetable(table[1], 8, 10);
    storetable(table[2], 15,10);
    
    return 0;
}

void storetable(int *table , int number, int n) {
    printf("The multipication table of %d is : \t", number);
    for(int i=0; i<n; i++){
        table[i] = number * (i+1);
    }
    for(int i=0; i<10; i++) {
        printf("%d \t" , table[i]);
    }

}