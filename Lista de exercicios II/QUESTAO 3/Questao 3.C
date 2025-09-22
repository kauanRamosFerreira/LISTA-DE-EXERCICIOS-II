#include <stdio.h>
int main()
{
    int Dado;
    int soma = 0;
    // a soma vai ser = 0 ,vai armazenar cada valor do dado do user e somar enquanto for menor que 20//
    while (soma < 20)
    {
        printf("digite o valor do dado,de 1 a 6:");
        scanf("%d", &Dado);
        soma = soma + Dado;
        printf("soma atual:%d\n", soma);
    }
    printf("O resultado final é:%d", soma, "Fim de jogo");
    return 0;
}