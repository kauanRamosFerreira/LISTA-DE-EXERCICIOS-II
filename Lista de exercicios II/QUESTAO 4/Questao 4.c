#include <stdio.h>
#include <stdlib.h>  // Para rand() e srand()
#include <time.h>    // Para time()
int main()
{

    int number_secret;
    int palpite;


     // Inicializa o gerador de números aleatórios com base no tempo atual
     srand(time(NULL));

     // Gera o meu numero aleatório
    number_secret = (rand() % 50) + 1;



    printf("tente adivinhar um numero secreto de 1 a 50!!\n");

    do
    {
        printf("digite o seu palpite:");
        scanf("%d", &palpite);

        if (palpite < number_secret)
        {
            printf("tente um nUmero mais alto!!\n");
        }
        else if (palpite > number_secret)
        {
            printf("digite um numero menor !!!\n");
        }
        else
        {
            printf("ParabEns vc advinhou!!!");
        }
        // "!=" diferente de
    }
        while (palpite != number_secret);

        return 0;
    }