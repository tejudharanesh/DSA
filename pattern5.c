// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *

#include<stdio.h>
void pattern5(n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    int n=9;
    pattern5(n);
}