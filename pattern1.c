#include<stdio.h>
void pattern1(n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

void main(){
    int n=10;
    pattern1(n);
}