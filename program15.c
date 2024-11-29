// WAP for looping 
/*#include <stdio.h>
int main (){

for (int i=1; i<=1000; i++)
{
    printf("Andy smith\n");
}
return 0 ;
}*/





// WAP to print a number from 1 to N
/*#include <stdio.h>
int main (){
 int n;
 printf("Enter the value of n = ");
 scanf("%d",&n);
for (int i=1; i<=n; i++)
{
    printf("%d\n",i);
}
return 0 ;
}*/







// WAP tp print all the even number from 1 to n
/*#include <stdio.h>
int main (){
 int n;
 printf("Enter the value of n = ");
 scanf("%d",&n);
for ( int i=2 ; i<=n; i++)
{
    if (i%2==0)
    printf("%d\n",i);
}
return 0 ;
}*/


//WAp to print print all alphabat from a to z






// WAP to print the sries of 1 4 9 16 25 .. N
/*#include<stdio.h>
int main (){
 int n;
 printf("Enter the value of n = ");
 scanf("%d",&n);
for ( int i=1 ; i<=n; i++)
{
  
    printf("%d\n",i*i);
}
return 0 ;
}*/




// WAp to print the sum of all series i,e sum = 1+ 2+ 3+4..... +n
/*#include<stdio.h>
int main (){
 int n , sum = 0;
 printf("Enter the value of n = ");
 scanf("%d",&n);
for ( int i=1 ; i<=n; i++)
{
  sum = sum + i;
  
}
  printf("Sum of series = %d",sum);
return 0 ;
}*/







// wap to print the table of given number 
/*#include<stdio.h>
int main (){
 int n , sum = 0;
 printf("Enter the value of n = ");
 scanf("%d",&n);
for ( int i=1 ; i<=10; i++)
{
    sum = n*i;
  printf("%d*%d=%d\n",n,i,sum);
  
}
 
return 0 ;
}*/









// WAP to print the factorial of given number 
/*#include<stdio.h>
int main (){
 int n , fact = 1 ;
 printf("Enter the value of n = ");
 scanf("%d",&n);
for ( int i=n ; i>=1; i--)
{
  fact = fact *i;
  
}
  printf("factorial = %d",fact);
return 0 ;
}*/









// WAP to print fabonacci series upto n term
/*#include<stdio.h>
int main (){
 int n , a = 0 , b= 1 , c ;
 printf("Enter the value of n = ");
 scanf("%d",&n);
 printf("%d %d",a,b);
for ( int i =3  ; i<=n; i++)
{
  c = a+b;
  printf(" %d ",c);
  a = b;
  b = c;
  
}

return 0 ;
}*/






//WAP to find the maximum of n number.
/*#include<stdio.h>
int main (){
 int n , num , max = 0;
 printf("Enter the value of n = ");
 scanf("%d",&n);

for ( int i =0  ; i<n; i++)
{

  printf(" Enter number = ");
  scanf("%d",&num);
  if (num>max)
  max = num;
 
  
}
printf("max = %d",max);

return 0 ;
}





//WAP to read  a number from user and perform the sum and cube of their digits
#include<stdio.h>
int main(){
  int num, sum = 0, rem;
  printf("Enter number = ");
  scanf("%d",&num);
  while(num!=0){
    rem  = num%10;
    //sum += rem;
    printf("%d",rem*rem*rem);
    num = num/10;
  }
  //printf("Sum of digit = %d",sum);
  return 0;
}







// WAP to perform the sum of all even digit of a given number.
#include<stdio.h>
int main(){
  int num, sum = 0, rem;
  printf("Enter number = ");
  scanf("%d",&num);
  while(num!=0){
    rem  = num%10;
    if (rem %2 ==0){

    sum += rem;}

    num = num/10;
  }
  printf("Sum of digit = %d",sum);
  return 0;
}






// WAP to perform the sum of all digit of a given number
#include<stdio.h>
int main(){
  int num, sum = 0, rem;
  printf("Enter number = ");
  scanf("%d",&num);
  while(num!=0){
    rem  = num%10;
    sum += rem;

    num = num/10;
  }
  printf("Sum of digit = %d",sum);
  return 0;
}







//WAP to remove all the even digit from the number
#include<stdio.h>
int main(){
  int num, digit, rem, num1 = 0;
  int i=1;
  printf("Enter number = ");
  scanf("%d",&num);
  while(num!=0){
    rem  = num%10;
    if (rem %2 !=0){
      num1 = num1 + rem*i;
      i = i*10;
}

    num = num/10;
  }
 printf("New number =%d",num1);
  return 0;
}








// WAP to perform all input numbers until user enter zero
#include<stdio.h>
int main(){
  int num, sum = 0;
  
   do{
    printf("Enter number = ");
   scanf("%d",&num);
   sum +=num;

    
  }while(num != 0);
  printf("Sum of all input number is = %d",sum);

  return 0;
}





//WAP to find the maximum of n number.
#include<stdio.h>
int main (){
  char ch;
   do{
 int n , num , max = 0;

 printf("Enter the value of n = ");
 scanf("%d",&n);
 printf("Enter %d Number  = ",n);
for ( int i =0  ; i<n; i++)
{
  scanf("%d",&num);
  if (num>max)
  max = num;
}
printf("max = %d",max);
printf("\nDo you want t run this program again press (y/n): ");
scanf("\n%c",&ch);
}while(ch =='y');
return 0 ;
}




// WAP to count number in a given number using built in function.
#include<stdio.h>
#include<math.h>
int main (){

  int num;
  printf("Enter the number = ");
  scanf("%d",&num);
  int digit = (int)log10(num)+1;
  printf("Number of digit are %d",digit);
  return 0;
}






// WAP to count number in a given number without using built in function.
#include<stdio.h>
#include<math.h>
int main (){

  int num, digit = 0 ;
  printf("Enter the number = ");
  scanf("%d",&num);
  while (num!=0)
  {
     num = num/10;
     digit++;
  }
  printf("Number of digit are %d",digit);
  return 0;
}*/




/*
//WAP to perform sum of ist and last digit.
#include<stdio.h>
#include<math.h>
int main(){
  int n, LD, FD;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  int digit = (int)log10(n)+1;
  LD = n%10;
  FD = n/pow(10,digit-1);
  printf("Sum = %d",LD+FD);
  return 0;
}



//WAP to swap ist and last digit of given number .
#include<stdio.h>
#include<math.h>
int main(){
  int n;
  printf("Enter the value of n : ");
  scanf("%d",&n);
 

  int digit = (int)log10(n)+1;
  int  LD = n%10;
  int FD = n/pow(10,digit-1);
  n = n%(int)pow(10,digit-1);
  n = n /10;

   int num = LD*pow(10,digit-1)+n*10+FD;
  printf("%d",num);
  return 0 ;

}






//Example of goto statement
#include<stdio.h>
#include<stdlib.h>
int main(){
  int pin; 
  abc : 
  printf ("Enter your pin : ");
  int z = scanf("%d",&pin);
  fflush(stdin);
  if(z==0)
   goto abc;
   
   printf ("Your pin is %d",pin);
   

  return  0;
}





// jumping is only in the main function where goto is used.
#include<stdio.h>
#include<stdlib.h>
int main(){
  int pin; 
  abc : 
  printf ("Enter your pin : ");
  scanf("%d",&pin);
  if (pin>999){
  printf ("it is valid\n");
  goto xyz;}
  else {
  xyz:
  printf ("it is not valid ");}
 

   

  return  0;
}






//WAp to print a series from 1 to n
#include<stdio.h>

int main(){
  int n;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
  {
    if(i%5==0 && i%7==0)
    break;
    printf("%d ",i);
  }
return 0;
}


#include<stdio.h>

int main(){
  int n;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  for(int i=1; i<=n; i++)
  {
    if(i%5==0 && i%7==0)
    continue;
    printf("%d ",i);
  }
return 0;
}



//WAP to check whether given number is prime or not
#include<stdio.h>
int main(){
  int n; 
  printf("Enter the value of n : ");
  scanf("%d",&n);
  for(int i=2; i<=n-1; i++){
    if (n%i!=0)
    printf("n is prime");
    
    else 
    printf("n is not prime");
    break;
  }
  return 0;
}





//WAP to check whether given number is prime or not
#include<stdio.h>
int main(){
  int n, flag=0, i=2; 
  printf("Enter the value of n : ");
  scanf("%d",&n);
  while (i<=n/2){
    if(n%i == 0)
    {
      flag = 1;
      break;
    }
    i++;
  }
  if (flag==0)
  printf("number is Prime");
  else 
  printf("Number is not prime ");
  return 0;
}*/



//WAp  to check given number is armstrong or not
#include<stdio.h>
#include<math.h>
int main(){
  int n,d = 0,n1, rem, res =0;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  n1 = n;
   while (n1!=0)
  {
     n1 = n1/10;
     d++;
  }
  n1=n;
  while(n1!=0){
  rem  = n1%10;
  res +=(int)pow(rem,d);
  n1/=10;}
  if (res == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}