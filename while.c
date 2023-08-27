#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("Digite um número:\n");
    scanf("%d", &num);

    while(num <= 10){ 
        printf("%d ", num);
        num++;
    }
    return 0;
}