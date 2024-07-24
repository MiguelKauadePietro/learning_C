#include <stdio.h>
#include <math.h>

int main(){
    int a, media, notaEsquecida;

    scanf("%d", &a);
    scanf("%d", &media);

    notaEsquecida = (2 * media) - a;

    printf("%d\n", notaEsquecida);
}