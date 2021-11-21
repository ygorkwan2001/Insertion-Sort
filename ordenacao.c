#include <stdio.h>
#include <stdlib.h>

void insertionSort(int n, int A[n]){
    int i;
    for(i = 1; i < n; i++){
        int elemento = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > elemento){
            A[j + 1] = A[j]; //deslocamento para direita
            j = j - 1;
        }
        A[j + 1] = elemento; //insere o elemento na partição ordenada
    }
}


int main() {

    int i;
    int vetorai[1000];


    for(i = 0; i < 1000; i++)
        vetorai[i] = rand();

    printf("\n\n");
    
    insertionSort(1000,vetorai);

    for(i = 1; i < 1000; i++){
       printf("[%d],", vetorai[i]);
    }

    printf("\n\n");

    return 0;
}