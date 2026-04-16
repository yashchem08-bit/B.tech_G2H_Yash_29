#include<stdio.h>
#include<stdbool.h>
int main(){
    int n ;
    bool isprime = 1;
    printf("Enter n :: ");
    scanf("%d",&n);

    for(int i = 2; i*i<=n;i++){
        if(n%i == 0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 1){
        printf("prime number ");
    }else{
        printf("not a prime number ");
    }

}