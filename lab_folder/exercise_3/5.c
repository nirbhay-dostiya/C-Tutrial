/* 5.	Write a program to determine whether the input 
character is capital or small letter, digits or special symbol.
*/
#include<stdio.h>

int main (){
    char ch;
    printf("Enter any character :");
    scanf("%c" , &ch);
    /* Character A – Z : ASCII Value 65 – 90
       Character a – z : ASCII Value 97 – 122
       Character 0 – 9 : ASCII Value 48 – 57
       Special Symbol : ASCII Value 0 – 47, 58 – 64, 91 – 96, 123 – 127 */

    if(ch >= 65 && ch< 90){
        printf("%c is UPPER CASE Latter" , ch);
    }else if(ch >= 97 && ch<=122){
        printf("%c is LOWER CASE Latter" , ch);
    }else if(ch >=48 && ch<=57){
        printf("%c is DIGITS");
    }else if( (ch >= 0  && ch <= 47) ||  
             (ch >= 58 && ch <= 64) ||  
             (ch >= 91 && ch <= 96) ||  
             (ch >= 123 && ch <= 127))  {  
        printf("%c is a Special Character\n", ch); 
  }
  return 0;
}