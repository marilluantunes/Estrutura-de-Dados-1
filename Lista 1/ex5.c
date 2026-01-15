#include <stdio.h>

int main() {

    int F, L;


    scanf("%d %d", &F, &L);

    char sala[20][25];

    for (int i = 0; i < F; i++) {
        for (int j = 0; j < L; j++) {
            sala[i][j] = '-';
        }
    }

    char fileira;
    int lugar;

    while (scanf(" %c%d", &fileira, &lugar) != EOF) {

        // converte a letra da fileira para número
        int linha = fileira - 'A';

        // lugar começa em 1, indice começa em 0
        int coluna = lugar - 1;

        sala[linha][coluna] = 'X';
    }

    for (int j = 1; j <= L; j++) {
        printf("%02d ", j);
    }
    printf("\n");

    // imprime o mapa da sala
    for (int i = F - 1; i >= 0; i--) {

        // imprime a letra da fileira
        printf("%c ", 'A' + i);

        for (int j = 0; j < L; j++) {
            if (sala[i][j] == 'X') {
                printf("XX ");
            } else {
                printf("-- ");
            }
        }
        printf("\n");
    }

    return 0;
}
