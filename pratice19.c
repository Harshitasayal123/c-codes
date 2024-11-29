// function with no argument but return value ( To find binary of number )
#include<stdio.h>
void getMessage(void);
int computeSimpleIntrest(int, int,int);
int main(){
    int p, r,t ;
    printf("Enter P, R, T");
    scanf("%d%d%d",&p, &r, &t);
    int si = computeSimpleIntrest(p,r,t);
    printf("SImple Intrest %d", si);
    return 0;
}
