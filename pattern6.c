// 12345678
// 1234567
// 123456
// 12345
// 1234
// 123
// 12
// 1

#include<stdio.h>
void pattern6(n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

void main(){
    int n=9;
    pattern6(n);
}