#include<stdio.h>

int main(void) {
    printf("1. Mengapa program pada Tugas 4 tetap bisa dikompilasi meskipun logikanya salah? Apa bedanya dengan syntax error?\n");
    printf("Program tetap dapat dikompilasi karena penulisan kodenya sudah sesuai dengan tata bahasa C. Perbedaannya, syntax error membuat program gagal dikompilasi karena ada kesalahan penulisan (seperti kurang titik koma), sedangkan kesalahan logika terjadi saat program berhasil berjalan tetapi menghasilkan output yang salah akibat urutan pengecekan yang keliru.\n");
    printf("2. Jelaskan kapan sebaiknya menggunakan nested if dibandingkan menggabungkan kondisi dengan operator &&.\n");
    printf("Nested if sebaiknya digunakan ketika pemeriksaan dilakukan secara bertahap atau hierarkis (suatu kondisi hanya perlu diperiksa jika kondisi utama sudah terpenuhi). Sementara itu, operator && lebih tepat digunakan jika beberapa syarat harus terpenuhi sekaligus dalam satu baris keputusan agar kode lebih sederhana.\n");
    printf("3. Berikan satu contoh nyata (selain yang dibahas di kelas) di mana operator || (OR) akan berguna dalam sistem proteksi kelistrikan.\n");
    printf("Contohnya pada sistem proteksi inverter atau genset, di mana sistem akan otomatis mati (trip) jika suhu komponen terlalu tinggi ATAU beban daya mengalami overload. Cukup satu dari kondisi bahaya tersebut terpenuhi untuk memicu penghentian sistem demi keselamatan.\n");
    printf("4. Menurut Anda, mengapa kebiasaan menulis == alih-alih = begitu penting dibiasakan sejak awal belajar C?\n");
    printf("Hal ini sangat penting karena = berfungsi untuk mengisi nilai (assignment), sedangkan == berfungsi untuk membandingkan dua nilai. Jika kita keliru menggunakan =, program tidak akan menampilkan kesalahan (error), melainkan mengubah nilai variabel tersebut dan membuat kondisinya selalu bernilai benar, sehingga memicu bug logika yang sulit ditemukan.\n");

    return 0;
}