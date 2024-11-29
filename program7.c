#include<stdio.h>
void main(){
int x = 9;
int y = x++ + ++x + ++x;
printf("%d\n%d",x,y);

}