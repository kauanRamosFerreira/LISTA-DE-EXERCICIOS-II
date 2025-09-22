#include <stdio.h>
int main(){
    int i;
    int soma=0;
    int N;
    printf("Digite o numero que deseja calcular a soma dos quadrados");

    scanf ("%d",&N);
      //INICIO,CONDIÇAO,PASSO(NO CASO DO PASSO ADICIONA 1 ATÉ O MEU NUMERO DIGITADO)
    for (i=1; i<=N ; i++) {
      //soma=0,+ i*i vai acrescentar o resultado dos quadrados a soma,
        soma=soma + (i*i);
    }
printf("A soma dos quadrados é de :%d\n",soma);

return 0;
}