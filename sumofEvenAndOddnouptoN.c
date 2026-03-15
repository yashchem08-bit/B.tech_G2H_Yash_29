#include<stdio.h>
int main(){
    int n ;
    printf("Enter n :: ");
    scanf("%d",&n);
    int oddsum = 0; 
    int  evensum = 0;
    for(int i = 1; i<= n ;i++){
        if(i%2 == 0){
            evensum += i;
        }else{
            oddsum += i;
        }
    }
    printf("oddsum is %d \n and evensum is %d",oddsum,evensum);
}