#include <stdio.h>
#include <math.h>

int main(){
    
    int bolinha, galho, totalGalhoImpar, total;

    scanf("%d", &bolinha);
    scanf("%d", &galho);

    if(galho % 2 == 0){
        total = (galho / 2) - bolinha;
    }else{
        totalGalhoImpar = galho - (galho % 2);
        total = (totalGalhoImpar / 2) - bolinha;
    }

    if(total > 0){
        printf("Faltam %d bolinha(s)\n", total);
    }else{
        printf("Amelia tem todas bolinhas!\n");
    }
    
    return 0;
}