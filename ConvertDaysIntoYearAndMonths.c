#include<stdio.h>   // take days = 465...
int main(){
    int days;
    printf("Enter the Days");
    scanf("%d",&days);
    int year ;
    int month;
    int Ldays;
    year = days / 365;
    month = days / 30 ;
    Ldays = (days%365)%30;

    printf("Year is :: %d",year);
    printf("\n");
    printf("month is :: %d",month);
     printf("\n");
    printf("remaining days is :: %d",Ldays);
}