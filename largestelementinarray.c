#include<stdio.h>
int main(){
    int arr[5] = {65,78,54,323,43};
    int max = arr[0] ;
    int i = 0;
    int n = 5;

    while(i<=n){
        if(arr[i+1]>arr[i]){
            max = arr[i+1];
        }
        i++;
    }
    printf("%d largest is ",max);
}
