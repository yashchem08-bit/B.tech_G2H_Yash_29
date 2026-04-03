#include <stdio.h>
int main(){
    int r, c,n ;
    printf("Enter the order of matrix::");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int freq=0;
    printf("Enter the elements");
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter the elemts to be found");
    scanf("%d",&n);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (n == a[i][j])
            {
                freq = freq + 1 ;
            }
            else {
                continue;
            }
            
        }
        
        
    }
    printf("%d is the freq",freq);
}
    