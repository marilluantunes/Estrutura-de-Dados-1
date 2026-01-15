#include <stdio.h>

int main() {
    int D;
    scanf("%d", &D);  

    int ano, semestre, m;

    while (scanf("%d %d %d", &ano, &semestre, &m) != EOF) {

        int max_reprovados = -1;
        int codigos[1000];
        int qtd_codigos = 0;

        for (int i = 0; i < m; i++) {
            int codigo, matriculados, aprovados;
            scanf("%d %d %d", &codigo, &matriculados, &aprovados);

            int reprovados = matriculados - aprovados;

            if (reprovados > max_reprovados) {
                max_reprovados = reprovados;
                qtd_codigos = 0;
                codigos[0] = codigo;
                qtd_codigos = 1;
            }
            else {
                if (reprovados == max_reprovados) {
                    codigos[qtd_codigos] = codigo;
                    qtd_codigos = qtd_codigos + 1;

                }
            }

        }



        for (int i = 0; i < qtd_codigos - 1; i++) {
            for (int j = i + 1; j < qtd_codigos; j++) {
                if (codigos[i] > codigos[j]) {
                    int temp = codigos[i];
                    codigos[i] = codigos[j];
                    codigos[j] = temp;
                }
            }
        }

        // saida
        printf("%d/%d\n", ano, semestre);

        for (int i = 0; i < qtd_codigos; i++) {
            printf("%d ", codigos[i]);
        }

        printf("\n\n"); 
    }

    return 0;
}
