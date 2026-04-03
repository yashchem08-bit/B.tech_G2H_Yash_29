#include<stdio.h>
int main(){
    int n , m;
    printf("Enter n and m :: ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    printf("Enter elements of array :: ");
    for(int i =0 ;i <n; i++){
        for(int j =0 ;j<m ;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int row[n] = {}, colm[m] = {};
  
    for(int i = 0 ;i<n;i++){
        for(int j =0;j<m;j++){
        row[i] += a[i][j];
        colm[i] += a[i][j];
        }
    }
  
    printf("ROW SUM IS :: ");
    for(int i =0 ;i <n; i++){
        printf("%d",row[i]);
    }
    printf("\n");
    printf("COLUMN SUM IS :: ");
    for(int j =0 ;j<m ;j++){
            printf("%d\n",colm[j]);
    }
    

}