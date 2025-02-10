// Fibonacci sequence is a sequence in which each number is the sum of the two preceding ones.  
  //0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ....

  #include<stdio.h>
int fib(int n);
int main() {
    int num;
    printf("Enter number of term : ");
    scanf("%d",&num);
    fib(num);
    for(int i =1; i<= num; i++) {
        printf("%d \t" ,fib(i));
    }
    printf("\n fib of %d term is : %d \n" ,num, fib(num)) ;  
      
    return 0;
}
int fib(int n){
    if(n==0){    
       return 0;
    }
    if(n==1){    
       return 1;
    }
    int fibNm2 = fib(n -2);
    int fibNm1 = fib(n -1);
    int fibN =fibNm1 +fibNm2;
    return fibN;
}