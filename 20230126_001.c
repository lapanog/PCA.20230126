#include <stdio.h>
int main () {
    int matriz1 [3][5] = {{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3}};
    int matriz2 [3][5] = {{9,9,9,9,9},{8,8,8,8,8},{7,7,7,7,7}};
    int matriz3 [3][5];
    
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            matriz3[i][j] = (matriz1[i][j] + matriz2[i][j]);
            printf(" %d", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
