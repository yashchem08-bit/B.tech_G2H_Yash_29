#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    printf("Enter n :: ");
    scanf("%d",&n);
    int sum = 0;
    int i = 0;
    while(n != 0){
        int ld = n%10;
        sum += ld*pow(2,i);
        i++;
        n /= 10;
    }
    printf("decimal is :: %d",sum);
}