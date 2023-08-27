#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite um número:\n");
    scanf("%d",&n);

    for(n; n<=10; n++){
        if(n ==5){
            continue;
        }
        printf("%d ",n);
    }
}