/*// how we can access the row and column in 2D
#include<stdio.h>
int main(){
    int arr[4][3]={{11,67,34,},{69,33,22},{45,89,74},{58,77,44}};
    //or int arr[4][3]={11,67,34,69,33,22,45,89,740,58,77,4};
    // i represents the row and j represents the column
    printf("Array Elemnts are :  \n");
    for (int i = 0; i<4; i++){
        for(int j = 0; j<3 ; j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }

}




//WAp to read and display the elements of 2D array.
#include<stdio.h>
int main(){
    int row, coln;
    printf("Enter the row and column : ");
    scanf("%d%d",&row,&coln);

    int arr[row][coln];
    
    // i represents the row and j represents the column
    printf("Enter array Elemnts  :  ");
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
            scanf("%d",&arr[i][j]);
        }
    }


        printf("Array Elemnts are :  \n");
    for (int i = 0; i<row; i++){
        for(int j = 0; j<coln ; j++){
            printf(" %d",arr[i][j]);
            
        }
        printf("\n");
    }
}




// WAP to perform the sum of all the elments in 2D array
#include<stdio.h>
int main(){
    int row, coln, sum =0;
    printf("Enter the row and column : ");
    scanf("%d%d",&row,&coln);
    int arr[row][coln];
    printf("Enter array Elemnts  :  ");
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
            scanf("%d",&arr[i][j]);
            sum =sum + arr[i][j];
        }
    }


        printf("sum = %d",sum);
    
    return 0;
}



// WAP to perform the sum of each rows and column
#include<stdio.h>
int main(){
    int row, coln;
    printf("Enter the row and column : ");
    scanf("%d%d",&row,&coln);
    int arr[row][coln];
    printf("Enter array Elemnts  :  ");
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
            scanf("%d",&arr[i][j]);
          
        }
    }

// logic to perform sum of each row 
for(int i=0; i<row;i++){
    int sum = 0;
for(int j=0; j<coln; j++){
sum += arr[i][j];}

     printf("Sum of %d row is %d\n",i,sum);
}


// logic to perform sum of each column
for(int i=0; i<coln;i++){
    int sum = 0;
for(int j=0; j<row; j++){
sum += arr[j][i];}

     printf("Sum of %d colmn is %d\n",i,sum);
}
    return 0;
}






//WAp to perform the sum of diagonal element of 2D array
#include<stdio.h>
int main(){
    int row, coln;
    printf("Enter the row and column : ");
    scanf("%d%d",&row,&coln);
    int arr[row][coln];
    printf("Enter array Elemnts  :\n");
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
            scanf("%d",&arr[i][j]);
        }
    }

        // logic perform to add main diagonal elements
        int sum = 0;
        for (int i = 0; i<row ; i++){
            sum += arr[i][i];
        }

         // logic perform to add minor diagonal elements
              int sum1 = 0;
        for (int i = 0, j= coln-1; i<row && j>=0 ; i++,j--){
            sum1 += arr[i][j];
        }

            printf(" Main Diagonal sum  = %d",sum);
             printf(" Minor Diagonal sum  = %d",sum1);

        
        
        return 0;
    }*/




 // WAP to perform the sum of two matrix
 #include<stdio.h>
 int main(){
    int row, coln;
    printf("Enter the row and coln :");
    scanf("%d%d",&row,&coln);
    int matrix1[row][coln], matrix2[row][coln];
    printf("Enter  Elemnts in matrix 1 : \n");
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("Enter  Elemnts matrix 2 : \n");
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
            scanf("%d",&matrix2[i][j]);
        }
    }
    // logic to perform sum of two matrix
    printf("Sum of mtrix is : \n");

   
    for (int i=0; i<row; i++){
        for(int j=0; j<coln ; j++){
           
          int sum = matrix1[i][j]+ matrix2[i][j] ;
           printf("%d",sum);
        }
        printf("\n");
       
      
        }
  return 0;
 }




