#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoa, anon, idade;
    printf("Descubra sua idade!!!\n");
    
    printf("Digite o ano atual:\n");
    scanf("%d",&anoa);

    printf("Digite seu ano de nascimento:\n");
    scanf("%d",&anon);

    idade = anoa - anon;
    printf("Sua idade é: %d anos\n", idade);
    return 0;
}