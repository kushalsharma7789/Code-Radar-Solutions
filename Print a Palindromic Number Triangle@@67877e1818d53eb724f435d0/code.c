#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
             printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
            
               }
        if(i>1){
            for(int l=i-1;l>=1;l--){
                printf("%d",l);
            }
        }
        printf("\n");
        
    }
    return 0;
}