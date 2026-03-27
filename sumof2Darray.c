#include<stdio.h>
int main(){
    int row , colm;
    printf("Enter rows and coloum size :: ");
    scanf("%d%d",&row,&colm);
    int arr[row][colm];
    int arr1[row][colm];
    printf("\n");
    printf("Enter elements ");
    for(int i =0; i<row; i++){
        for(int j =0 ; j<colm; j++){
            scanf("%d",&arr[i][j]);
            scanf("%d",&arr1[i][j]);
        }
    }
    int c[row][colm];
    
      for(int i =0; i<row; i++){
        for(int j =0 ; j<colm; j++){
            c[i][j] = arr[i][j] + arr1[i][j];
        }
      }
      printf("sum of elements of 2d array is :: ");
      for(int i =0; i<row; i++){
        for(int j =0 ; j<colm; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
      }
    

}