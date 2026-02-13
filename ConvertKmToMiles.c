#include<stdio.h>
int main(){
    float km = 0;
    float miles = 0;
    int c;
    printf("To whom you want to convert press 1 for KM || press 0 for miles :: ");
    scanf("%d",&c);

    if(c == 1){
        printf("Enter the value of miles:: ");
        scanf("%f",&miles);

        km = miles*(1.609);
        printf("your Km is ::%f",km);
    }else if( c == 0){
        printf("Enter the values of Km :: ");
        scanf("%f",&km);

        miles = km *(0.621);
        printf("your miles is :: %f",miles);
    }else{
        printf("--INVALID INPUT--");
    }

    return 0;

}