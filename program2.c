//area , circumference of circle, area of square, rectangle.
// "\n"
#include<stdio.h>
int main(){
    float area_of_circle, radius, perimeter;
    int  area_of_square, side, area1 , l, b;
    printf("Enter radius = ");
    scanf("%f",&radius);
    area_of_circle  =3.14*radius*radius;
    perimeter = 2*3.14*radius;
    printf("Area_of_circle=%f\nPerimeter = %f\n",area_of_circle,perimeter);
  
    printf("Enter side= ");
    scanf("%d",&side);
    printf("Area_of_square = %d\n",side*side);
    printf("enter l and b = ");
    scanf("%d%d",&l,&b);
    printf("area1 = %d\n",l*b);

    return 0;



}