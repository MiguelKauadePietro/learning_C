#include <stdio.h>
#include <math.h>

int main(){
    int qtdCurupira, qtdBoitata, qtdBoto, qtdMapinguari, qtdIara, curupira, boitata, boto, mapinguari, iara, total, donaChica;

    scanf("%d", &qtdCurupira);
    scanf("%d", &qtdBoitata);
    scanf("%d", &qtdBoto);
    scanf("%d", &qtdMapinguari);
    scanf("%d", &qtdIara);

    curupira = 300 * qtdCurupira;
    boitata = 1500 * qtdBoitata;
    boto = 600 * qtdBoto;
    mapinguari = 1000 * qtdMapinguari;
    iara = 150 * qtdIara;
    donaChica = 225;

    total = curupira + boitata + boto + mapinguari + iara + donaChica;

    printf("%d\n", total);

}