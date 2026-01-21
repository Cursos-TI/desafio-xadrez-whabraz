#include <stdio.h>

//======
// Torre: movimento horizontal para a direita
//======
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

//======
// Rainha: movimento horizontal para a esquerda
//======
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//======
// Bispo:
// - loops aninhados simulam diagonal (cima + direita)
//======
void moverBispo(int casas) {
    if (casas == 0) return;

    // movimento vertical
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");

        // movimento horizontal
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

//======
// Cavalo:
// movimento em L
// 2 casas para baixo
// 1 casa para a esquerda
//======
void moverCavalo() {

    // movimento vertical
    for (int i = 0; i < 3; i++) {

        if (i < 2) {
            printf("Baixo\n");
            continue;
        }

        // movimento horizontal após descer
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
            break;
        }
    }
}

int main() {

    //======
    // Torre
    //======
    printf("Torre: \n");
    moverTorre(5);
    printf("\n");

    //======
    // Bispo
    //======
    printf("Bispo: \n");
    moverBispo(5);
    printf("\n");

    //======
    // Rainha
    //======
    printf("Rainha: \n");
    moverRainha(8);
    printf("\n");

    //======
    // Cavalo
    //======
    printf("Cavalo: \n");
    moverCavalo();

    return 0;
}
