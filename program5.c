#include<stdio.h>
#include<math.h>
int main(){
float n, sum;
    printf("Enter the value of n :  ");
    scanf("%f",&n);
    sum = n*(n-1)/2;
    printf("sum = %f",sum);
    return 0; 
}