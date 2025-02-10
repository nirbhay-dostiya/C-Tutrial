//#include<stdio.h>
//(Question 1.) Given an array of marks of students , if the mark of any students is less than 35 print its roll no (roll no is the index value)

// int main() {
//     int marks[5] = {25,81,66,38,21,};
//     for(int i=0; i<5; i++){
//         if(marks[i]<35){
//             printf("%d \t" , i);
//         }
//     }
//     return 0;
// }

// //(Question 2.) Calculate the sum of all the elements in the given array
// #include<stdio.h>
// int main() {
//     int array[] = {2,3,4,8,6,9};
//     int sum = 0;
//     for(int i=0; i<6; i++){
//         sum = array[i] + sum;
//     }
//     printf("Sum is : %d" , sum);
// }

// // (Question 3.) Find maximum value out of all the element in the array
// #include<stdio.h>
// int main() {
//     int arr[6] ={25,45,36,15,52,17};
//     int max = arr[0];
//     for(int i=0; i<6; i++) {
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("The max value in given arry is : %d \n" , max);
//     return 0;
// }

// //(Question 4).Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
// #include<stdio.h>
// int main() {
//     int arr[8] = {2,6,4,9,4,2,3,7};
//     for(int i=0; i<8; i++) {
//         if(i % 2 ==0) {
//             arr[i] = arr[i]*2;
//         }
//         else{
//             arr[i] = arr[i] + 10;
//         }
//     }
//          printf("New array is : ");

//     for(int i=0; i<8; i++){        
//          printf("%d \t" , arr[i]);
//     }
//     return 0;
// }

// //(Question 5). Find the diffrence between the sum of element at even indices to the sum of element at odd indices.
// #include<stdio.h>
// int main() {
//     int evensum = 0 , oddsum = 0;
//     int arr[10] = {2,5,6,7,9,3,4,8,2,6};
//     for(int i=0; i<10; i++){
//         if(arr[i] % 2== 0){
//             evensum+=arr[i];
//         }
//         else oddsum+= arr[i];
//     }
//     printf("sum of even is : %d \n", evensum);
//     printf("sum of odd is : %d \n", oddsum);
//     printf("The difference of even and odd is : %d \n" , evensum - oddsum);

//     return 0;
// }

//Question 6.find the total number ofo pairs in the array whose sum is equal to the given value x.
#include<stdio.h>
int main() {
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x = 19, total_pairs = 0;
    for(int i=0; i<15; i++){
        for(int j=i+1; j<15; j++){
            if(arr[i] + arr[j] == x){
                total_pairs++;
                printf("(%d,%d)\n" , arr[i] ,arr[j]);
            }
        }
    }
    printf("%d\n" , total_pairs);

    return 0;
}