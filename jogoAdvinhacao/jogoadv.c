#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){ //!Função principal do código
    //! imprimindo o cabeçalho do jogo
    printf("********************************\n");
    printf("Bem-vindo ao jogo de advinhação*\n");
    printf("********************************\n");

    int numeroSecreto = 42;

    int chute;


    for(int i = 1; i <= 3; i++){
        printf("Tentativa %d de 3\n", i);
        printf("Qual é o número secreto?\n");

        scanf("%d", &chute); //!essa função server para ler o valor digitado, e temos que alocar a variável na string dentro dessa função para ler a tecla que o valor foi digitado, aí depois colocar um & comercial e colocar o nome da variável, fazendo com que assim ler o valor da variável

        //! OBS: o "&" serve para buscar a variável alocada na memória
        printf("O seu chute foi: %d\n", chute);

        // printf("%d\n", chute);

        //!"%d" serve para simular um espaço reservado para uma variável, e após terminar a frase colocar a variável depois de uma vírgula
        //printf("O número %d é o secreto, não fala pra ninguém!\n", numeroSecreto);

        int acertou = (chute == numeroSecreto);

        if(acertou){
            printf("Você acertou!\n");
            break;
        }else{
            int maior = (chute > numeroSecreto);
            if(maior){
                printf("Seu chute é maior que o número secreto\n");
            }else{
                printf("Seu chute é menor que o número secreto\n");
            }
            printf("Você errou!\n");
        }
        printf("Fim de jogo!\n");
    }

return 0; //!obrigatório pois a função é int e terá que retornar um número inteiro
}