#include <stdio.h>
#include <math.h>

int main(){

    int x, y;

    printf("Informe um número: ");
    scanf("%d", &x);

    printf("Informe outro número: ");
    scanf("%d", &y);

    int op = x * y;

    printf("O resultado é: %d\n", op);

    return 0;
}