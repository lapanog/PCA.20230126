/* Faça uma função para multiplicar duas matrizes.
A função recebe como parâmetro as três matrizes e as dimensões das duas primeiras matrizes e
verificar se as matrizes podem ser multiplicadas e apresentar uma mensagem de erro, caso não seja possível. 
O resultado da multiplicação das duas primeiras matrizes deve ser armazenado na terceira matriz.
A função deve retornar falso se não for possível multiplicar as matrizes, e verdadeiro caso contrário.
A função não deve ler as matrizes, imprimir o resultado, nem a mensagem de erro. Isto deve ser feito na função principal. */

#include <stdio.h>
#include <stdlib.h>

int mult_matr(int m1[][200], int m2[][200], int multi[][200], int l1, int c1, int l2, int c2){

    if(c1!=l2){
        return 0;
    }

    else{
        int aux = 0;

        for (int i = 0; i < l1; i++){
            for (int j = 0; j < c2; j++){
                for(int a = 0; a < c1; a++){
                    aux = aux + (m1[i][a] * m2[a][j]);
                }
                printf("aux %d%d = %d\n", i, j, aux);
                multi[i][j] = aux;
                aux = 0;
            }
        }
        
        return 1;
    }
}

int main() {
    int l1, c1, l2, c2;

    printf ("Digite o número de linhas da matriz m1:\n");
    scanf("%d", &l1);

    printf ("Digite o número de colunas da matriz m1:\n");
    scanf("%d", &c1);

    printf ("Digite o número de linhas da matriz m2:\n");
    scanf("%d", &l2);

    printf ("Digite o número de colunas da matriz m2:\n");
    scanf("%d", &c2);

    int m1[l1][200];
    int m2[l2][200];

    printf ("Digite a matriz m1:\n");

    for (int i = 0; i < l1; i++){
        for (int j = 0; j < c1; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf ("Digite a matriz m2:\n");

    for (int i = 0; i < l2; i++){
        for (int j = 0; j < c2; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    int multi[c1][200];

    if(!(mult_matr(m1, m2, multi, l1, c1, l2, c2))){printf("Não é possível multiplicar as matrizes.\n");}

    else{
        printf("\nA matriz gerada foi:");

        for (int i = 0; i < l1; i++){
            printf("\n");
            for (int j = 0; j < c2; j++){
                printf("%d ", multi[i][j]);
            }
        }
    }
    return 0;
}
