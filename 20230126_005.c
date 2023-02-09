/* Dada uma matriz 5x5, elabore um algoritmo que imprima:
A diagonal principal
A diagonal secundária
A soma da linha 4
A soma da coluna 2
Tudo, exceto a diagonal principal */

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Digite uma matriz 5x5:\n");
    int matriz[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA diagonal principal:\n");
    for(int i=0;i<5;i++){
        for (int j=1;j<=i;j++){
            printf("  ");
        }
        printf("%d\n", matriz[i][i]);
    }

    printf("\nA diagonal secundária:\n");
    for(int i=4;i>=0;i--){
        for (int j=1;j<=i;j++){
            printf("  ");
        }
        printf("%d\n", matriz[4-i][i]);
    }

    printf("\nA soma da linha 4:");
    int soma = 0;
    for(int i=0;i<5;i++){
        soma = soma + matriz[3][i];
    }
    printf(" %d\n", soma);

    printf("\nA soma da coluna 2:");
    soma = 0;
    for(int i=0;i<5;i++){
        soma = soma + matriz[i][1];
    }
    printf(" %d\n", soma);

    printf("\nTudo, exceto a diagonal principal:\n");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){printf("  ");}
            else{printf("%d ", matriz[i][j]);}
        }
        printf("\n");
    }

    return 0;

}
