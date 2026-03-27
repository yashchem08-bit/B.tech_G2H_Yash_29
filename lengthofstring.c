#include<stdio.h>
#include<string.h>
int main(){
   char str[100] ;
   printf("Enter string :: ");
   scanf("%s",str);
   int count = 0;
   int n = 0;
   while(str[n] != '\0'){
       count ++;
       n++;
   }
   printf("length of string is :: %d",count);

