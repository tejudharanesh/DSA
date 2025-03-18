// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<stdio.h>
void pattern7(n){
    for(int i=1;i<= 2*n-1;i++){
        int stars = i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        
        
   
    printf("\n");
}
}

void main(){
    int n=8;
    pattern7(n);
}