#include<stdio.h>
#include<math.h>
int main(){
    char op ;
    int a , b;
    printf("Enter the values and operator :: ");
    scanf("%d%c%d",&a,&op,&b);

    switch (op)
    {
    case '+':
        {
            printf("sum = %d",a+b);
        }
        break;
    case '-':
    {
        printf("subraction = %d",a-b);
    }
    break;
    case '*':
    {
         printf("multiplycation = %d",a*b);
    }
    break;
    case '/' : 
    {
         printf("division = %d",a/b);
    }
    break;
    default:
        break;
    }
}