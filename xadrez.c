#include <stdio.h>

int main() {
    //===============
    // Torre - 5 casas para a direita
    //===============


    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }



    printf("\n");
    //===============
    // Bispo - 5 casas em diagonal (Cima + Direita)
    //===============

    int casasBispo = 5;
    int contadorBispo = 0;

    while (contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    //===============
    // Rainha - 8 casas para a esquerda
    //===============

    int casasRainha = 8;
    int contadorRainha = 0;

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;




}
