//       *        
//      ***       
//     *****      
//    *******     
//   *********    
//  ***********   
// *************  


#include<stdio.h>
void pattern7(n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=1;j<= i*2+1;j++){
        printf("*");
    }
    for(int j=1;j<n-i;j++){
        printf(" ");
    }
    printf("\n");
}
}

void main(){
    int n=9;
    pattern7(n);
}