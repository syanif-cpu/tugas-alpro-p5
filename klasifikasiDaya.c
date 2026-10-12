#include <stdio.h>

int main(void) {
    float daya;
    
    printf("Masukkan nilai daya (Watt): ");
    scanf("%f", &daya);

    if (daya < 100.0) {
        printf("Kategori: Daya Rendah\n");
    } else {
        if (daya <= 500.0) {
            printf("Kategori: Daya Sedang\n");
        } else {
            printf("Kategori: Daya Tinggi\n");
            
            if (daya > 1000.0) {
                printf("PERLU PROTEKSI TAMBAHAN\n");
            }
        }
    }

    return 0;
}