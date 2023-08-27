#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Escreva um número:\n");
    scanf("%d", &num);

    do{
        printf("%d ",num);
        num++;
    }while(num <= 10);
    return 0;
}