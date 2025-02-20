#include<stdio.h>
int main(){
    int a =2;
    if(a%1==0 && a%a==0 && a%2==0){
        printf("It is not a prime number");
    }
    else if(a%1==0 && a%a==0 && a%2!=0){
        printf("It is a prime number");
    }
    else if (a%1==0 && a%a==0 && a%2==0)
    {
        printf("It is a prime number");
    }
    

    
}