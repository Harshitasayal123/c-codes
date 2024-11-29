/*// WAP to print all natural nuber upto n
#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the n : ");
    scanf("%d",&n);
    for( i=1 ; i<=n; i++)
    {
    if (i%2 == 0)
    printf("%d\n",i);
    }

    
    return 0;

}



// WAP to print all natural nuber upto n ( odd)
#include<stdio.h>
int main(){
    int n, i;
    printf("Enter the n : ");
    scanf("%d",&n);
    for( i=1 ; i<=n; i++)
    {
    if (i%2 != 0)
    printf("%d\n",i);
    }

    
    return 0;

}

#include<stdio.h>
int main(){

    switch (2){
        case 1:
        printf("case 1\n");
        break;
         case 2:
        printf("case 2\n");
        break;
         case 3:
        printf("case 3\n");
        break;
         case 4:
        printf("case 4\n");
        break;
    }
    return 0;
}





//Nested staement
#include<stdio.h>
int main(){
    int j, i;
   
    for( i=0 ; i<=5 ;i++)
    { 
     for( j=0 ; j<=5; j++){
  
    printf("* ");
    }
    printf("\n");
    }

    
    return 0;

}*/



/*
//for middle part to disppear ( square patent )
#include<stdio.h>
int main(){
    int j, i;
   
    for( i=1 ; i<=5 ;i++){ 
     for( j=1 ; j<=5; j++){
        if ( i==1 || i == 5 || j==1 ||j==5 || i == j){
      printf("* ");
    }
    else {
    printf("  ");
    }

    }
    printf("\n");
     
    }
    
    
    return 0;
}*/



#include<stdio.h>
int main(){
    int j, i;
   
    for( i=1 ; i<=5 ;i++)
    { 
     for( j=1 ; j<=i; j++){
         if ( i==1 || i == 5 || j==1 ||j==5 || i == j){
  
    printf("* ");
    }
    else {
    printf("  ");
    }
     }
    printf("\n");
    }

    
    return 0;

}