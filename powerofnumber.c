#include<stdio.h>
int main(){
    int n, m ;
    printf("Enter n :: ");
    scanf("%d",&n);
    printf("Enter power :: ");
    scanf("%d",&m);
    int result = 1;
    for(int i = 1 ;i <=m;i++ ){
        result *= n;
    }
    printf("%d",result);
}