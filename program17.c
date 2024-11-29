/*#include<stdio.h> 
void show(){
    static int x = 10;
    int y= 10;
    printf(" x=%d y=%d\n",x, y);
    x++;
    y++;
  
}
int main ()
{
    for(int i = 0;i<5;++i){
        show();
     }

    return 0;
}





// suntax for array
#include<stdio.h>
int main(){
    
        int arr[5];
        printf("Enter Array Elements :  ");
        for(int i =0; i<5; i++){
        scanf("%d",&arr[i]);
        }
        printf("Araay element are : ");
       for(int i =0; i<5; i++){
        printf("%d",arr[i]);
    }
    return 0;
}



// Wap to read and display the element of an array
#include<stdio.h>
int main(){
    int size;
    printf("Enter array Size :  ");
    scanf("%d",&size);
    
        int arr[size];
        printf("Enter Array Elements :  ");
        for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
        }
        printf("Araay element are : ");
       for(int i =0; i<size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}



//wap to display the element of an array in reverse 
#include<stdio.h>
int main(){
    int size;
    printf("Enter array Size :  ");
    scanf("%d",&size);
    
        int arr[size];
        printf("Enter Array Elements :  ");
        for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
        }
        printf("Array element are : ");
       for(int i =size -1 ; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}





// Wap to to find the sum of  all the element of an array
#include<stdio.h>
int main(){
    int size, sum = 0;
    printf("Enter array Size :  ");
    scanf("%d",&size);
    
        int arr[size];
        printf("Enter Array Elements :  ");
        for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
        }
        printf("Araay element are : ");
       for(int i =0; i<size; i++){
        printf("%d ",arr[i]);
        sum += arr[i];
    }
    printf("sum = %d",sum);
    return 0;
}



// WAp to copy data form one array to another array.
#include<stdio.h>
int main(){
    int size;
    printf("Enter array Size :  ");
    scanf("%d",&size);
    
        int arr1[size];
        printf("Enter Array Elements :  ");
        for(int i =0; i<size; i++){
        scanf("%d",&arr1[i]);
        }
        printf("Araay1 element are : ");
       for(int i =0; i<size; i++){
        printf("%d ",arr1[i]);
    }
    int arr2[size] ;
    for(int i =0; i<size ; i++){
        arr2[i] = arr1[i];
    }
    printf("Array2 Elements are : ");
    for(int i = 0; i<size ; i++){
        printf(" %d",arr2[i]);
    }
    return 0;
}




// WAp to count number of even and odd elements in an array.
#include<stdio.h>
int main(){
    int size;
    printf("Enter array Size :  ");
    scanf("%d",&size);
    
        int arr[size];
        printf("Enter Array Elements :  ");
        for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
        }
        int even = 0, odd = 0;
        for(int i =0; i<size; i++){
            if (arr[i]% 2 == 0)
            even++;
            else 
            odd++;

        }
        
        printf ("Total even element are :  = %d\n",even);
    
        printf("Total odd element are :  = %d\n",odd);
    
    return 0;
}


// WAp to search an element in array.
#include<stdio.h>
int main(){
    int size, i;
    printf("Enter array Size :  ");
    scanf("%d",&size);
    
        int arr[size];
        printf("Enter Array Elements :  ");
        for( i =0; i<size; i++){
        scanf("%d",&arr[i]);
        }
       int target , flag = 0;
       printf("Enter Searching element :");
       scanf("%d",&target);
       // logic for linear search
       for( i =0; i<size ; i++){
        if(arr[i]==target)
        {
            flag=1;
            break;
    
        }
       }
       if (flag == 1)
       printf("Element found at position %d",i);
       else 
       printf("Element not found  %d",i);
    return 0;
}



// wap  to find the largest element in an array
#include<stdio.h>
int main(){
    int size, i;
    printf("Enter array size :");
    scanf("%d",&size);

    int arr[size];
    printf("Enter array element : ");
    for( i=0; i<size; i++){
    scanf("%d",&arr[i]);}

    int L =arr[0] ;
     for( i=1; i<size; i++){
      if( L<arr[i])
      L = arr[i];
      }
        printf("%d is the largest element in the array",L);
        return 0;

}




// wap  to find the sescond largest element in an array
#include<stdio.h>
int main(){
    int size, i;
    printf("Enter the Array size : ");
    scanf("%d",&size);


    int arr1[size];
    printf("Array element : ");
    for( i=0; i<size; i++){
    scanf("%d",&arr1[i]);}

    int L =arr1[0] ;
     for( i=1; i<size; i++){
      if( L<arr1[i])
      L = arr1[i];
      }
       
    
    int L2 = arr1[0] ;
     for( i=1; i<size; i++){
      if( L2<arr1[i])
      
     L2= arr1[i];
      }
       L2 <L;
        printf("%d is the second largest element in the array",L2);
        return 0;


}*/