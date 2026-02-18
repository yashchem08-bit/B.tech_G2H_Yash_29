#include<stdio.h>
int main(){
    int a = 10;
    int b = 20 ;
    int c ;
    c = a ;
    a = b;
    b = c;
    printf("now a is :: %d\n",a);
    printf("now b is :: %d\n",b);
}