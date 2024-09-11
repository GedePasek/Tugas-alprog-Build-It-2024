#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Fungsi perbandingan untuk digunakan dalam qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int nilaiRama;

    // Input jumlah nilai matkul Rama
    scanf("%d", &nilaiRama);

    int nilai[nilaiRama];

    // Input N buah nilai
    for (int i = 0; i < nilaiRama; i++) {
        scanf("%d", &nilai[i]);
    }

    // Mengurutkan nilai menggunakan qsort
    qsort(nilai, nilaiRama, sizeof(int), compare);

    // Output nilai yang sudah terurut
    for (int i = 0; i < nilaiRama; i++) {
        printf("%d\n", nilai[i]);
    }

   
    return 0;
}
