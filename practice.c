
// WAP to perform the sum of all digit of a given number
/*#include<stdio.h>
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


#include<stdio.h>
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
//EAP to find additin , subtraction , multiplica

#include<stdio.h>
int main(){
  int a, b;
  printf("Enter the value of a and b :");
  scanf("%d%d",&a,&b);

  printf("Sum of two number = %d\n",a+b);
   printf("Subtraction of two number = %d\n",a-b);
    printf("multiplication of two number = %d\n",a*b);
     printf("remainder of two number = %d\n",a%b);
  return 0;

}



#include<stdio.h>
int main(){
  int a, b, side;
  float  radius, B , H  ;
  printf("Enter the value of a and b :");
  scanf("%d%d",&a,&b);
  printf("Enter the value of side :");
  scanf("%d",&side);
  printf("Enter the value radius :  ");
  scanf("%f",&radius);
  printf("Enter the value of B and H :  ");
  scanf("%f%f",&B,&H);

  printf("area of reactangle = %d\n",a*b);
  printf("perimeter of reactangle = %d\n",2*(a+b));
  printf("perimeter of square = %d\n",4*side);
    printf("area of square = %d\n",side*side);
 printf("area of circle = %.2f\n",3.14*radius*radius);
  printf("circumference of circle = %.2f\n",2*3.14*radius);
  printf("area of triangle = %.2f\n",0.5*B*H);
 return 0;

}





#include<stdio.h>
int main(){
  int x =0, y=0 ,z;
  printf ("Enter the value of x and y: ");
  scanf("%d%d",&x,&y);
  z=y;
  y=x;
  x=z;
  printf("X=%d,Y=%d",x,y);
  return 0;
}





#include<stdio.h>
int main(){
  int x, y;
  printf("Enter the value of x and y : ");
  scanf("%d%d",&x,&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("x=%d  y=%d",x,y);
  return 0;
}






#include<stdio.h>
int main(){
  int sub1, sub2,  sub3, sub4, sub5, total_marks;
  float percentage;
  printf("Enter the value of sub1, sub2,  sub3, sub4, sub5 : ");
  scanf("%d%d%d%d%d",&sub1, &sub2,  &sub3, &sub4, &sub5);
  printf("Total marks = %d\n",sub1+sub2+sub3+sub4+sub5);
  printf("Percentage = %d",(sub1+sub2+sub3+sub4+sub5)/5);
  return 0;
}





#include<stdio.h>
int main(){
  float temp;
  printf("Enter the temperature in faherenheit: ");
  scanf("%f",&temp);
  
  printf("Celsius =%.2f",(temp-32)*5/9);
  return 0;
}



#include<stdio.h>
int main(){
  int N;
  printf("Enter the value of N :  ");
  scanf("%d",&N);
  printf("Sum of 1 to N = %d",(N*(N+1))/2);
}



#include<stdio.h>
int main (){
  int totaldays, yrs, months, days;
  printf("Enter the value of days:  ");
  scanf("%d",&totaldays);
  yrs= totaldays/365;
  totaldays = totaldays%365;
  months= totaldays /30;
  days = months%30;
  printf("  %dyrs  %dmonths  %ddays",yrs,months,days);
  return 0;
}





#include<stdio.h>
int main (){
  int millisecond, hours, minutes, seconds;
  printf("Enter the value of milliseconds:  ");
  scanf("%d",&millisecond);
  hours = millisecond/3600000;
  millisecond = millisecond%3600000;
  minutes = millisecond /6000;
  millisecond = millisecond%6000;
  seconds = millisecond/1000;


  printf("  %dhours  %dminutes  %dsecond",hours,minutes,seconds);
  return 0;
}


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



#include<stdio.h> 
int main(){
  int n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  (n%2==0) ? (printf("N is even"))  : (printf("n is odd"));
  return 0;
  }


 #include<stdio.h>
 int main(){
  int x, y;
  printf("Enter the value of x and y :");
  scanf("%d%d",&x,&y);
  x>y ? printf("x is greater than y") : printf("y is greater than x");
  return 0;
 }



#include<stdio.h>
void main(){
  int x, y, z;
  printf("Enter the value of x, y and z : "); 
  scanf("%d%d%d",&x,&y,&z);
  x>y,x>z ? printf("x is greater than ya nd z") : y>x , y>z ? printf("y is greater than x and z") : printf("z is greater than x and y");

}



#include<stdio.h>
int main (){
  int n;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  if(n%2==0)
  printf("n is even");
  else
  printf("n is odd"); 
  return 0;
}

#include<stdio.h>
int main (){
  int x,y;
  printf("Enter the value of x and y : ");
  scanf("%d%d",&x,&y);
  if(x>y)
  printf("x is greater than y");
  else
  printf("y is greater than x"); 
  return 0;
}


#include<stdio.h>
int main (){
  int age ;
  printf("Enter age : ");
  scanf("%d",&age);
  if(age>18)
  printf("Person is eligible to vote");
  else
  printf("Person is not eligible to vote"); 
  return 0;
}


#include<stdio.h>
int main(){
  char ch ;
  printf("the value of character : ");
  scanf("%c",&ch);
  if(ch =='a' || ch =='e' || ch =='i'|| ch =='o' || ch == 'u' ||ch =='A' || ch =='E' || ch =='I'|| ch =='O' || ch == 'U')
  printf("Charcter is vowel");
  else 
  printf("Character is consonant");
  return 0;
}





#include<stdio.h>
int main(){
  int n;
  char ch;
  printf("ENter charcter : ");
  scanf("%c",&ch);
  if((ch>=65 && ch <=90) || (ch>=97 && ch <=122))
  printf("It is alaphabat"); 
  else if (ch>=48 && ch<=57)
  printf("It is digit");
  else
  printf("It is symbol");
  return 0;
}


#include<stdio.h>
int main(){
  int x, y, z;
  printf("Enter the value of x, y and z : ");
  scanf("%d%d%d",&x,&y,&z);
  if (x>y && x>z)
  printf("x is greater than y and z");
  else if (y>x && y>z)
  printf("y is greater than x and z");
  else 
  printf("z is greater than x and z");
  return 0;

}

#include<stdio.h>
int main(){
  int n;
  printf("Enter the value of n :");
  scanf("%d",&n);
  if (n/10==0)
  printf("n is one digit");
  else if (n/100==0)
  printf("n is two digit");
  else  if (n/1000==0)
  printf("n is three digit");
  
  else 
  printf("Not valid");
  return 0;


}


#include<stdio.h>
int main(){
  int sub1, sub2, sub3, sub4 , sub5 , averagemarks;
  printf("Enter the marks of sub1, sub2 , sub3 , sub4 and sub5 :");
  scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
  averagemarks = (sub1+ sub2+ sub3 + sub4 + sub5)/5 ;
  if(averagemarks>=90)
  printf("A+");
  else if(averagemarks>=80 && averagemarks<90)
  printf("A");
   else if(averagemarks>=70 && averagemarks<80)
  printf("B+");
   else if(averagemarks>=60 && averagemarks<70)
  printf("B");
   else if(averagemarks>=50 && averagemarks<60)
  printf("C");
     else 
     printf("Fail");
     return 0;

  

}


#include<stdio.h>
int main(){
  int BS, GS  = 0;
  printf("Enter Basic salary :");
  scanf("%d",&BS);
  
  if(BS<=2000)
    GS = BS + (BS*10/100) + (BS*20/100);

  else if(BS>2000 && BS<=5000)
    GS = BS + (BS*20/100) + (BS*30/100);

   else  if(BS>5000 && BS<=10000)
    GS = BS + (BS*30/100) + (BS*40/100);
 
     else if(BS>10000)
    GS = BS + (BS*50/100) + (BS*50/100);
  
  else 
  printf("Not valid");

  printf("Total salary = %d",GS);
    
     return 0;

  

}


#include<stdio.h>
int main(){
  int daynum;
  printf("Enter daynum : ");
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
  printf("Saturaday");
  break;
  case 7:
  printf("Sunday");
  break;
  default :
  printf("Invalid data");
  }
  return 0;

}



#include<stdio.h>
int main(){
  int num;
  float radius, side, length, width;
  printf("1.Area of circle\n");
  printf("2.Area of square\n");
  printf("3.Area of rectangle\n");
  printf("Enter choice = ");
  scanf("%d",&num);
  switch (num){
    case 1: 
    printf("Enter radius : ");
    scanf("%f",&radius);
    printf("Area = %f",3.14*radius*radius);
    break;
    case 2: 
    printf("Enter side :  ");
    scanf("%f",&side);
    printf("Area = %f",side*side);
    break;
    case 3: 
    printf("Enter length and width : ");
    scanf("%f%f",&length,&width);
    printf("Area = %f",length*width);
    break;
    default:
    printf("Invalid data");
  }
  return 0;
}*/



//WAP to find greatest number among three using switch statement .
/*#include<stdio.h>
int main(){
  int x, y, z;
  printf("Enter the value of x, y and z :");
  scanf("%d%d%d",&x,&y,&z);
  switch(1){
    case 1:
    if (x>=y && x>=z)
    printf("x is greater than y and z");
    else if (y>=x && y>=z)
    printf("y is greater than x and z");
    else
    printf("z is greater than x and y");
    break;
    default :
    printf("Invalid data");
  }
  return 0;
}
// WAp to print the sum of all series i,e sum = 1+ 2+ 3+4..... +n
#include<stdio.h>
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
}




#include<stdio.h>
int main(){
  int num;
  float radius, side, length, width;
  printf("1.Area of circle\n");
  printf("2.Area of square\n");
  printf("3.Area of rectangle\n");
  printf("Enter choice = ");
  scanf("%d",&num);
  switch (num){
    case 1: 
    printf("Enter radius : ");
    scanf("%f",&radius);
    printf("Area = %f",3.14*radius*radius);
    break;
    case 2: 
    printf("Enter side :  ");
    scanf("%f",&side);
    printf("Area = %f",side*side);
    break;
    case 3: 
    printf("Enter length and width : ");
    scanf("%f%f",&length,&width);
    printf("Area = %f",length*width);
    break;
    default:
    printf("Invalid data");
  }
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









//WAP to check the given number is palindrome or not

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit
        reversedNum = reversedNum * 10 + remainder;  // Append the last digit
        num /= 10;  // Remove the last digit
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}*/
  

  

// WAP to calculate the product of  of all digit of a given number
#include<stdio.h>
void main(void){
  int num, product = 1, rem;
  printf("Enter number = ");
  scanf("%d",&num);
  while(num!=0){
    rem  = num%10;
    product *= rem;

    num = num/10;
  }
  printf("product of digits = %d",product);
}
