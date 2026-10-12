#include <stdio.h>

int main(void) {
    float tegangan, arus, suhu;

    printf("Masukkan Tegangan (V): ");
    scanf("%f", &tegangan);
    printf("Masukkan Arus (A): ");
    scanf("%f", &arus);
    printf("Masukkan Suhu (°C): ");
    scanf("%f", &suhu);

    printf("\n--- STATUS SISTEM ALARM ---\n");

    if (tegangan >= 210.0 && tegangan <= 230.0) {
        printf("Tegangan: Normal\n");
    } else {
        printf("Tegangan: TIDAK NORMAL\n");
    }

    if (arus >= 0.0 && arus <= 5.0) {
        printf("Arus: Aman\n");
    } else {
        printf("Arus: MELEBIHI BATAS\n");
    }

    if (suhu < 70.0) {
        printf("Suhu: Aman\n");
    } else if (suhu >= 70.0 && suhu <= 85.0) {
        printf("Suhu: Waspada\n");
    } else {
        printf("Suhu: Bahaya\n");
    }

    return 0;
}