// 1
// 12
// 123
// 1234
// 12345
// 123456
// 1234567
// 12345678
// 123456789

#include<stdio.h>
void pattern3(n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

void main(){
    int n=9;
    pattern3(n);
}