#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int k=a-i-1;k>=0;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}