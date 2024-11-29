// type casting
 /*#include<stdio.h>
int main(){
   double d = 123.89;
    int x = d;
    printf("%d",x);
    return 0;
   



} */

//wap to find a ^ b
/*#include<stdio.h>
#include<math.h>
int main(){
      int a, b,res;
      printf("Enter the value of base and power");
      scanf("%d%d",&a,&b);
      res = pow(a,b);
      printf("Power = %d",res);
      return 0;

}

    Syntax of pow() functiom :
    double pow(double base, double power)

//wap to find a ^ b
*#include<stdio.h>
#include<math.h>
int main(){
      int a, b,res;
      printf("Enter the value of base and power");
      scanf("%d%d",&a,&b);
      printf("Power = %d",(int)pow(a,b));
      return 0;
        }
   // implicit conversion 
   #include<stdio.h>
   void main(){
    int i = 20;
    float p;
    p=i; // implicit conversion 
    printf ("implicit value is %f \n",p);
   }

    // explicit conversion 
   #include<stdio.h>
   void main(){
    int i = 20;
    short p;
    p=(short)i; // explicit conversion 
    printf ("explicit value is %d \n",p);
   }
       */
      #include<stdio.h>
      void main(){
        int n;
        printf("Enter number : ");
        scanf("%d",&n);
        if (n>0){
            printf ("Cube = %d",n*n*n);
        
      }
       
      }