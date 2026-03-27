#include<stdio.h>
int main(){
    int arr[5] = {4,5,2,7,4};
    int n = 5;
    int sum  = 0;
    for(int i = 0; i<n;i++){
        sum += arr[i];
    }
    float avg = 0.0 ;
    avg = (float)sum/n;
    printf("sum of elements of array is ::%d \n average of elements is %f",sum,avg);
}