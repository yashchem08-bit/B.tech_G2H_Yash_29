#include<stdio.h>
int main() {
    char ch;
    printf("Enter a character or number :");
    scanf(" %c",&ch);
   if( (ch >= 'a' && ch <= 'z')  || (ch >= 'A' && ch <= 'Z')){
    printf("Enterd charcter is alphabet ");
   }else if ( ch >='0' || ch <= '9' ){
    printf("Entered charcter is number");
   }else{
    printf("Entered charcter is special charcter");
   }
    return 0;
}