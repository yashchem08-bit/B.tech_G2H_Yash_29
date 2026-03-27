#include<stdio.h>
int main(){
    int n ;
    printf("enetr n :: ");
    scanf("%d",&n);
    float sum  = 0.0;
    for(int i = 1; i<= n; i++){
        sum += ((float)1.0/i);
    }
    printf("sumation of series is :: %f",sum);
}