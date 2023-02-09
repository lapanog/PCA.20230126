/* Criar uma função que efetue e apresente o resultado da soma entre duas matrizes.  */
#include <stdio.h>
#include <stdlib.h>

void somanxn(int a[][100], int b[][100], int l1, int c1, int l2, int c2){
    int linha, coluna;
    if (l1 != l2 || c1 !=c2){
        printf ("As matrizes não tem a mesma ordem");
        return;
    }
    for (linha=0;linha<l1;linha++){
        for (coluna=0;coluna<c1; coluna++){
            if (coluna==0){printf("{%d, ", a[linha][coluna]+b[linha][coluna]);}
            else{
                if(coluna==c1-1){printf("%d}\n", a[linha][coluna]+b[linha][coluna]);}
                else{printf("%d, ", a[linha][coluna]+b[linha][coluna]);}
            }
        }
    }
}

int main(){
  
    int l1, c1, l2, c2;

    printf ("Digite o número de linhas da matriz m1:\n");
    scanf("%d", &l1);

    printf ("Digite o número de colunas da matriz m1:\n");
    scanf("%d", &c1);

    printf ("Digite o número de linhas da matriz m2:\n");
    scanf("%d", &l2);

    printf ("Digite o número de colunas da matriz m2:\n");
    scanf("%d", &c2);

    int m1[l1][100];
    int m2[l2][100];

    printf ("Digite a matriz m1:\n");

    for (int i=0; i<l1; i++){
        for (int j=0; j<c1; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf ("Digite a matriz m2:\n");

    for (int i=0; i<l2; i++){
        for (int j=0; j<c2; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    somanxn(m1,m2,l1,c1,l2,c2);

    return 0;
}
