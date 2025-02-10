#include<stdio.h>
#include<math.h>

int vut(float u, float t);
int vuatt(float u, float t, float a);
int sut(float u, float t, float a);

int main() {
    int u, t, a;
    printf("Enter u , t , a : ");
    scanf("%d , %d, %d" , &u, &t ,&a);
    float v1 = vut(u,t);
    float v2 = vuatt(u, t, a);
    float s = sut(u, t, a);



printf("final velocity1 : %f\n" , v1);
printf("final velocity2 : %f\n" , v2);
printf("Displacment : %f\n" , s);

    return 0;
}

int vut(float u, float t) { 
    float v1 = u * pow(t,2);
    return v1;
}

int vuatt(float u, float t, float a){
    float v2 = u + a * pow(t, 2);
    return v2;
}

int sut(float u, float t, float a){
    float s = u*t + 1 / (2*a);
    return s;
}