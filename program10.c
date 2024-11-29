// wap to find the largest no among three using ternary operator.
#include<stdio.h>
void main (){
    int x, y, z ;
    printf ("Enter the value of x, y and z : ");
    scanf("%d%d%d",&x,&y,&z);
    (x>y && x>z)? printf("%d",x) : (y>x && y>z)? printf ("%d",y) : printf("%d",z);
}