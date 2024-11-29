// String varible
/*
#include<stdio.h>
int main(){
    char name[30]  = "Andy Smith"; 
    char clgname[50] = "MIET Jammu";
    printf("name = %s\nname = %s",name,clgname);
    return 0;
}

// how we can read and display the name and college name "string" data from user
#include<stdio.h>
int main(){
    char name[30], clgname[30];
    printf("Enter your full name : ");
     gets(name);
    printf("Enter college name : ");

    //scanf("%s%s",&name);
   
    gets(clgname);
   // printf("Name = %s\n",name);
   puts(name);
   puts(clgname);
   // printf("College name = %s",clgname);
    return 0;
}

// Functions of string  (Built in function)
#include<stdio.h>
#include<string.h>

int main(){
     char str[20];
    
    printf("Enter the string : ");
    gets(str);
    int len = strlen(str);
    printf("Length of string = %d\n",len);
    strlwr(str);
    printf("After converting to lowercase string is = %s\n",str);
    strupr(str);
        printf("After converting to uppercase string is = %s\n",str);
        strrev(str);
        printf("After reversing the string  = %s\n",str);
        char str1[20], str2[20];
        printf("Enter string : ");
        gets(str1);
        strcpy(str2,str1);
        printf("After copy string 2 = %s",str2);

    return 0;
}*/



#include<stdio.h>
#include<string.h>
int main(){

char str[30],ch;

int flag = 0,i;
printf("Enter string 1");
gets(str);
printf("Enter character");
scanf("%c",&ch);
int len = strlen(str);
for(i=0;i<len;i++){
if(str[i]==ch) {
flag =1;

break;

}

}

if(flag == 1)
printf("First occurance of charcater Xc is %d ",ch,i);



else


printf("Given character not found!!");
}

/*
#include<stdio.h>
int main(){
    getMessage();
    return 0;

}
void getMessage(void){
    int a ;
    a = 10;
    printf("%d\n",a);
    printf("Please mark me present today");
}*/