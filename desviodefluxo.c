#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Digite sua idade:\n",idade);
    scanf("%d",&idade);

    if(idade < 18){
        printf("Menor de idade!");
    }else{
        printf("Maior de idade!");
    }
    return 0;
}