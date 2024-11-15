
#include<stdio.h>
// c function to check if a number is even or not
int iseven(int a){
    if(a % 2==0){
        return 1;//even number

    }else{
        return 0;//old number
    }
}
int main(){
int b;
printf("Enter a number: ");
scanf("%d",&b);
//check if the number is even or odd
if (iseven(b)){
    printf("Is an even number %d \n",b);
}else{
    printf("Is an odd  number %d \n",b);
}
return 0;
}

