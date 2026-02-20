#include<stdio.h>
#include<math.h>
int main(){
    int a , b, c;
    printf("Enter the coefficients of a quadratic equation (a, b, c): ");
    scanf("%d%d%d",&a,&b,&c);if((b*b - 4*a*c)<0){
        printf("Roots are imaginary");
    }else{
        int Root = (-b + sqrt(b*b - 4*a*c))/(2*a);
        int Root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
        printf("roots if equation are %d and %d ", Root , Root2);
    }
    
    
    
}