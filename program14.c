// WAP to read a number from the user and if the number is positive print cube otherwise square 
/*
#include<stdio.h>
      void main(){
        int n;
        printf("Enter number : ");
        scanf("%d",&n);
        if (n>0){
            printf ("Cube = %d",n*n*n);
        
      }
      else
      {
        printf("square = %d",n*n);
      }
       
      }*/

     //wap to check the given number is odd or even
/*#include<stdio.h>
      void main(){
        int n;
        printf("Enter number : ");
        scanf("%d",&n);
        if (n % 2 == 0){
            printf ("Number is even");
        
      }
      else
      {
        printf("Number is odd");
      }
      }*/




     // wap to find the greatest number
     /*#include<stdio.h>
      void main(){
        int n, m;
        printf("Enter n amd m : ");
        scanf("%d%d",&n,&m);
        if (n>m){
            printf ("n is greater");
        
      }
      else
      {
        printf("m is greater");
      }
      }*/




     //WAP to check given character is alaphabat or not (ASCII value)
     /*#include<stdio.h>
      void main(){
        char Ch;
        printf("Enter the value of char = ");
        scanf("%c",&Ch);
        if ((Ch>=65 && Ch<=90)||(Ch>=97 && Ch<=122)){
            printf ("it is alphabet");
        
      }
      else
      {
        printf("it is not alphabet");
      }
      }*/




     //WAP to check whether person is eligible for voting or not
     /*#include<stdio.h>
      void main(){
        int age;
        printf("Enter the age of the person=  ");
        scanf("%d",&age);
        if (age>18){
            printf ("Person is eligible to vote");
        
      }
      else
      {
        printf("Person is not eligible to vote");
      }
      }*/







     //WAp to check whether te given alphabat is vowel or consonant
     /*#include<stdio.h>
     int main(){
        char Ch;
        printf("Enter the character value =");
        scanf ("%c",&Ch);
        if (Ch == 'a'||Ch == 'e'||Ch == 'i'||Ch == 'o'||Ch == 'u'||Ch == 'A'||Ch == 'E'||Ch == 'I'||Ch == 'O'||Ch == 'U'){
        printf("Charcter is vowel");
        }
        else 
        printf("Character is consonant");
        return 0;

     }*/





    //WAP to check wether the given character is aplhabat , digit or symbol.
    /*#include<stdio.h>
     int main(){
        char ch;
        int n;
        printf("Enter the character = ");
        scanf ("%d",&ch);
        if ((ch >= 65 && ch <=90)||(ch>=97 && ch<=122))
        printf("it is alphabat");
        else if (ch >= 48 && ch <=57)
        printf("It is digit");
        else 
        printf("It is symbol");
     }
*/








   //WAP to find the greatest among three 
   /*#include<stdio.h>
   int main(){
    int a, b, c;
    printf("Enter the value of a, b, c = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
      printf("a is greater");
    }
    else if  ("b>a && b>c"){
    printf("b is greater");
    }
   else 
   {
      printf("c is greater");
   }
   return 0;

   }*/









  /*#include<stdio.h>
   int main(){
    int a, b, c;
    printf("Enter the value of a, b, c = ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
      printf("a is greater");
    }
    else if  ("b>c")
    printf("b is greater");
    
   else 
      printf("c is greater");
   
   return 0;

   }*/









  // WAP to check wether   the given number is single digit , two digit , three didgit or more digits.
  /*#include<stdio.h>
  int main (){
    int n;
    printf("Enter the value of n = ");
    scanf ("%d",&n);
    if (n/10 == 0){
      printf("n is 1 digit number");
    }
    else if (n/100 == 0){
      printf("n is 2 digit number");
    }
  else  if (n/1000 == 0){
      printf("n is 3 digit number");
    }
  
  }*/
  //WAP to input of 5 subject marks and display the grade according to table 
  /*#include<stdio.h>
  int main (){
    int sub1, sub2, sub3, sub4, sub5, Average;
    printf("Enter the value of sub1, sub2, sub3, sub4, sub5 = ");
    scanf ("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    Average = (sub1 +sub2+ sub3+ sub4+sub5)/5;
    printf("Average = %d\n" ,Average);
    if (Average>=90)
    printf("Grade = A+");
      else if  (Average>=80 && Average<90)
    printf("Grade = A");
    else if  (Average>=70 && Average<80)
    printf("Grade = B+");

    else if  (Average>=60 && Average<70)
    printf("Grade = B");

    else if  (Average>=50 && Average<60)
    printf("Grade = C");
    else 
    printf("Fail");

return 0;
  }*/
 // salary find with bss and gss
 /*#include<stdio.h>
 int main (){
  int BS, GS;
  printf("Enter the BS = ");
  scanf("%d",&BS);
  if(BS<=2000){
    GS = BS + (BS*10/100) + (BS*20/100);
  }
  else if(BS<=5000 && BS >2000){
    GS = BS + (BS*20/100) + (BS*30/100);
  
  }
  else if(BS<=10000 && BS>5000){
    GS = BS + (BS*30/100) + (BS*40/100);
  
  }
  else{
    GS = BS + (BS*50/100) + (BS*50/100);
  }
  printf("Total salary = %d ",GS);
 }*/

// WAp to check wether given year is leap year or normal year
/*#include<stdio.h>
int main(){
  int Year;
  printf("Enter the value of Year :");
  scanf ("%d",&Year);
  if (Year%100==0)
  {
    if(Year%400==0)
    printf("Year is a leap year");
    else  
       printf("Year is not leap year");
    }
    else if (Year%4==0)
     printf("Year is leap year");
  
    else 
    printf("Year is not leap year");
    return 0;
}*/
// (Switch statement) WAP  to take day as a number  as an input and print day name  as corressponding to that day number.
/*#include<stdio.h>
int main (){
  int daynum;
  printf("Enter the daynum = ");
  scanf("%d",&daynum);
  switch(daynum)
  {
    case 1:
         printf("Monday");
         break;
         case 2:
         printf("Tuesday");
         break;
         case 3:
         printf("Wednesday");
         break;
         case 4:
         printf("Thursday");
         break;
         case 5:
         printf("Friday");
         break;
         case 6:
         printf("Saturady");
         break;
         case 7:
         printf("Sunday");
         break;
         default:
         printf("Invalid data");
  }
return 0;
}*/
// WAP using switch statement for area of circle, square and rectangle
/*#include<stdio.h>
int main(){
  float radius, side, length, width;
  int num;
   printf("1. Area of circle\n");
   printf("2. Area of rectangle\n");
   printf("3. Area of square\n");
   printf("enter choice of area ");
   scanf("%d",&num);
  

   switch (num) {
    case 1:
    printf("Enter the value of radius = ");
    scanf("%f",&radius);
    printf("area = %f",3.14*radius*radius);
    break;
    case 2:
    printf("Enter the value of lenght and width =  ");
    scanf("%f%f",&length,&width);
    printf("area = %f",length*width);
    break;
    case 3:
    printf("Enter the value of side = ");
    scanf("%f",&side);
    printf("area = %f",side*side);
    break;
    default:
     printf("Invalid data");
}
return 0;
}*/
