#include <stdio.h>

int main(void) {
    float resistansi;
    printf("Resistansi (Ohm): "); 
    scanf("%f", &resistansi);

    if (resistansi > 0.0 && resistansi < 1000000.0) {
        printf("Nilai valid\n");
    } else {
        printf("Nilai tidak logis untuk resistor\n");
    }

    return 0;
}