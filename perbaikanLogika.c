#include <stdio.h>

int main(void) {
    float nilai = 75.0;

    if (nilai > 70.0) {
        printf("Kategori: Sangat Tinggi\n");
    } else if (nilai > 50.0) {
        printf("Kategori: Tinggi\n");
    } else {
        printf("Kategori: Rendah\n");
    }

    return 0;
}