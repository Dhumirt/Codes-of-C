#include<stdio.h>
int main(){
   int feb =30;
   if(feb==29){
    printf("It is a leap year");
   }
   else if(feb<=28){
    printf("It is not a leap year");
   }
   else{
    printf("invalid");
   }
}