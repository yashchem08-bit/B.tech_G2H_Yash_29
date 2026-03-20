#include<stdio.h>
int main(){
    int n;
    printf("enter n :: ");
    scanf("%d",&n);
    printf("all factors are :: ");
    for(int i =1;i<= n/2;i++){
       if(n%i == 0){
        printf("%d\n",i);
       }
    }
    printf("%d",n);
}