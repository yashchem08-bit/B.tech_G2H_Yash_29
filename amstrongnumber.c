// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n ;
//     printf("Enetr n : ");
//     scanf("%d",&n);
//     int count = 0,Ntemp = n,temp = n,ams = 0;
//     while(temp != 0){
//         count++;
//         temp /= 10;
//     }
//     for(int i = 0 ;i<count;i++){
//         int ld = n%10;
//         ams += pow(ld,count);
//         n /= 10;
//     }
//     if(ams == Ntemp){
//         printf("amstrong number ");
//     }else{
//         printf("not a amstrong number");
//     }
// }




#include <stdio.h>
#include <math.h>

int main() {
    for (int n = 1; n <= 500; n++) {
        int temp = n, count = 0, ams = 0;

        // Count digits
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = n;
        // Calculate Armstrong sum
        while (temp > 0) {
            int ld = temp % 10;
            ams += pow(ld, count);
            temp /= 10;
        }

        // Check Armstrong condition
        if (ams == n) {
            printf("Armstrong number: %d\n", n);
        }
    }
    return 0;
}
