// Sum of two no.
//#include<stdio.h>
//int main(){
//int a, b, sum;
//printf("Enter the value of a :   ");
//scanf("%d",&a);
//printf("Enter teh value of b;  ");
//scanf("%d",&b);
//printf("sum = %d",a+b);
//return 0 ;}


//Area of reactangle
//#include<stdio.h>
//int main(){
//int l,b;
//printf("Enter the value of l : ");
//scanf("%d",&l);
//printf("Enter the value of b : ");
//scanf("%d",&b);
//printf("Area = %d",l*b);
//return 0 ;}


//Area of triangle
//#include<stdio.h>
//int main(){
//double b, h, area ;
//printf("Enter the value of b");
//scanf("%lf",&b);
//printf("Enter the value of h");
//scanf("%lf",&h);
//printf("Area = %lf",b*h*0.5);
//return 0;}


//Average of five number
//#include<stdio.h>
//int main(){
//    int a,b,c,d,e;
//    printf("enter the value of a : ");
//    scanf("%d",&a);
//     printf("enter the value of b : ");
//    scanf("%d",&b);
//     printf("enter the value of c : ");
//    scanf("%d",&c);
//     printf("enter the value of d : ");
//    scanf("%d",&d);
//     printf("enter the value of e : ");
//    scanf("%d",&e);
//    printf("Average = %d",(a+b+c+d+e)/5);
//    return 0 ;}



//swapping of two numbers
//#include<stdio.h>
//int main(){
//    int x, y, z;
//    printf("Enter the value of x : ");
//    scanf("%d",&x);
//    printf("Enter the value of y : ");
//    scanf("%d",&y);
 //   z=y;
 //   x=y;
//    y=z;
//    printf("x=%d\n",x);
//    printf("Y=%d\n",y);
//    return 0 ;}


// Swapping of two number without using third variable
//#include<stdio.h>
//int main(){
//    int x, y;
//    printf("Enter the value of x : ");
//    scanf("%d",&x);
//    printf("Enter the value of y : ");
//    scanf("%d",&y);
//    x = x+y;
//    y = x-y;
//    x = x-y;
//    printf("x = %d\n",x);
//    printf("y = %d\n",y);
//    return 0;}


//Find out the total marks and percentage of the five marks
//#include<stdio.h>
//int main(){
//    float sub1, sub2, sub3, sub4, sub5, totalmarks, percentage;
  //  printf("Enter the value of sub1 : ");
//    scanf("%f",&sub1);
//    printf("Enter the value of sub2 : ");
//    scanf("%f",&sub2);
//    printf("Enter the value of sub3 : ");
//    scanf("%f",&sub3);
//    printf("Enter the value of sub4 : ");
//    scanf("%f",&sub4);
//    printf("Enter the value of sub5 : ");
//    scanf("%f",&sub5);
//    totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;
//     percentage = totalmarks/5;
//    printf("totalmarks = %f\n",totalmarks);
//    printf("percentage = %f\n",percentage);
//    return 0;}



//Convert temperature from fahrenheite to celsius
//#include<stdio.h>
//int main(){
//    float celsius, fahrenheite;
//    printf("Enter the value of fahrenheite :  ");
//    scanf("%f",&fahrenheite);
//    printf("celsius = %f",(fahrenheite - 32)*5/9);
 //   return 0;}


 //Convert time given in millisecond into second minute and hour .
//#include<stdio.h>
//int main(){
  //  int millisecond, second, minute, hour;
    //printf("Enter the value of millisecond :  "),
   // scanf("%d",&millisecond);
//    hour = millisecond/3600000 ; 
  //  millisecond = millisecond % 3600000;
    //minute = millisecond/60000;
//    millisecond = millisecond % 60000;
  //  second = millisecond /1000;
   // printf("hour=%d\n",hour);
    //printf("minute=%d\n",minute);
   // printf("second = %d\n",second);
  //  return 0 ;}



  //Convert no. of days into yrs , months and days
 // #include<stdio.h>
 // int main (){
 //   int days, years, months,  totaldays;
//    printf("enter the value of totaldays : ");
  //  scanf("%d",&totaldays);
 //   years = totaldays/365;
 //   totaldays = totaldays % 365;
//    months = totaldays / 30 ;
 //   days = totaldays % 30 ;
//    printf("years = %d\n",years);
//    printf("months =%d\n",months);
//    printf("days = %d\n",days);
//    return 0 ;}




//WAP to read 5 digit number from the user and perform the sum of their digits.

#include<stdio.h>
int main(){
  int n, sum =0, digit ;
  printf("Enter the value of n = ");
  scanf("%d",&n);
  if(n>9999 && n<100000)
{
  while (n>0){
    digit = n%10;
    sum+= digit;
    n = n/10;
  }
}
else 
printf("Not Valid");
printf("Sum = %d", sum);
return 0;
}
