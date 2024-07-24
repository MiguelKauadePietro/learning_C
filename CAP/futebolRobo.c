#include <stdio.h>
#include <math.h>

int main(){

    int distancia, pontos;

    scanf("%d", &distancia);

    if (distancia <= 800)
    {
        pontos = 1;
    }else if(distancia <= 1400){
        pontos = 2;
    }else if(distancia <= 2000){
        pontos = 3;
    }

    printf("%d\n", pontos);
    
    return 0;
}