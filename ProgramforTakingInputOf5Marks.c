#include<stdio.h>
int main(){
    int p,m,ee,evs,pps;
    printf("Enter the marks of five subjects :: \n");
    scanf("%d%d%d%d%d",&p,&m,&ee,&evs,&pps);
    float per = 0;
    int sum = p + m + pps + ee + evs;
    per = sum/5;

    printf("Total marks obtained :: %d \n Your percentage is :: %f",sum , per);
}