/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 - Overview C Language
 *   Hari dan Tanggal    : Selasa, 14 April 2026
 *   Nama (NIM)          : Muhammad Azka Rahadian (13224036)
 *   Nama File           : soal1.c
 *   Deskripsi           : Mencetak warna lampu berdasarkan aturan prioritas tertentu
 * Kondisi atau aturan :
    untuk suatu tingkat i: 
    jika i habis dibagi 2 dan 3, cetak BIRU
    else jika i habis dibagi 3, cetak MERAH
    else jika i habis dibagi 2, cetak kuning
    else jika jumlah digit i>=10 adalah genap, cetak HIJAU
    selain itu, cetak nilai i

    Format input
    N
 */
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2==0 && i%3==0){
            printf("BIRU\n");
        } else if(i%3==0){
            printf("MERAH\n");
        } else if(i%2==0){
            printf("KUNING\n");
        } else{
            printf("%d\n", i);
        }

    }return 0;
}
