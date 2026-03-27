#include<stdio.h>
int main(){
    int n ;
    int trgt;
    printf("ENter n :: ");
    scanf("%d",&n);
    int arr[n];
    printf("\n");
    printf("Enter the elements of array :: ");
    for(int i = 0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("\n");
    printf("Enter target:: ");
    scanf("%d",&trgt);
 printf("\n");
    for(int i = 0 ; i<n ;i++){
        if(arr[i] == trgt){
           printf("\n");
            printf("found element at index %d",i);
        }
    }
}