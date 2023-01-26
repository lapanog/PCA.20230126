#include <stdio.h>
 int main () {
     
     int matriz[3][3];
     
     int i, j, elemento;
     for (i = 0; i < 3; i++) {
         for (j = 0; j < 3; j++) {
             printf("digite um elemento da matriz ");
             scanf("%d", &elemento);
             matriz[i][j] = elemento; 
         }
     }
    
    int x = 0;
    int s = 0;
    printf("digite o valor x: ");
    scanf("%d", &x);
    
     for (i = 0; i < 3; i++) {
         for (j = 0; j < 3; j++) {
             if (matriz[i][j] == x) {
                 s++;
                 printf("valor encontrado na linha %d, coluna %d", i + 1, j + 1);
             }
        }
    }
    if (s == 0) {
         printf("não encontrado");
     }
     return 0;
 }
