#include <stdio.h>
#include <math.h>

int main(){

    int C, P, F, totalFolha, diferencaFolha;
    char resultado;

    scanf("%d %d %d", &C, &P, &F);

    totalFolha = C * F;
    diferencaFolha = P - totalFolha;

    if(diferencaFolha >= 0){
        resultado = 'S';
    }else{
        resultado = 'N';
    }

    printf("%c\n", resultado);

    return 0;
}