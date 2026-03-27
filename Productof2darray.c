#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the no. of rows in the array:");
    scanf("%d",&n);
    printf("Enter the no. of columns in the array:");
    scanf("%d",&m);
    int a[n][m];
    int b[n][m];
    int c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int g=0;g<n;g++){
        for(int e=0;e<m;e++){
            c[g][e]=0;
            for(int o=0; o<m; o++){
                c[g][e] += a[g][o] * b[o][e];
            }
        }
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            printf("c[%d][%d]=%d\n;",k,l,c[k][l]);
        }
    }
    return 0;
}
