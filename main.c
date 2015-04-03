/* 
 * File:   main.c
 * Author: Diego
 *
 * Created on 3 aprile 2015, 17.05
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, num;
    int v[N];
    printf("Inserisci l'elemento 0 : ");
    scanf("%d", &(v[0]));
    for(i = 1; i < N; i++) {
        printf("Inserisci l'elemento %d : ", i);
        scanf("%d", &num);
        for(j = i; j > 0 && v[j-1] > num; j--) {
            v[j] = v[j-1];
        }
        v[j] = num;
    }
    printf("Algoritmo ordinato (Insert-Sort) : \n");
    for(i = 0; i < N; i++) {
    printf("%d ", v[i]);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

