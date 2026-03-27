#include<stdio.h>
int main(){
    int a , b ;
    
    printf("Enter a and b ::" );
    scanf("%d%d",&a,&b);
    int temp = a , temp1 = b;
    while (a != b ){   
        if(a>b){
            a = a - b;
        }
        else{
            b = b-a;
        }
    }

    
    printf("GCD is %d",a);
    int lcm = (temp * temp1)/a;
     printf("\nLCM is %d",lcm);
    
}