#include <stdio.h>

int main(){
    int idade = 0;
    int ano = 0;

    printf("Valor inicial da idade: %d. \n",idade);
    printf("Digite uma idade e um ano:\n");
    
    scanf("%d %d", &idade, &ano);

    printf("Idade informada: %d. \n",idade);
    printf("ano informado: %d. \n",ano);
}