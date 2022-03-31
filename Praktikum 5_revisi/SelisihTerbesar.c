/*Nama File     : SelisihTerbesar.c*/
/*Deskripsi     : Menghitung selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya*/
/*Nama-NIM      : Zenit Laena Fathonah-24060121120006*/
/*Tanggal selesai pengerjaan : 30 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    //kamus
    int N; /*Banyaknya data*/
    int i; /*counter*/
    int puncak; /*menaik*/
    int lembah; /*turun*/
    int selisih; /*selisih ketinggian terbesar antara puncak bukit dengan lembah bukit atau sebaliknya*/
    int T[100]; /*array static*/

    /*Algoritma*/
    printf("======================Program Selisih Ketinggian Terbesar=======================\n");
    printf("\nMasukkan banyaknya data : ");
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        printf("Masukkan elemen ke-%d: ", i);
        scanf("%d", &T[i]);
        }
    if (N <= 0){
        printf("Masukkan harus positif");
        }
    else {
        puncak = T[0];
        lembah = T[0];
        for (i = 1; i < N; i++){
            if (T[i] > (puncak)){
                puncak = T[i];
                }
            }
        for (i = 1; i < N; i++){
            if (T[i] < (lembah)){
                lembah = T[i];
                }
            }

        printf("\nPuncak : %d", puncak);
        printf("\nLembah : %d", lembah);
        selisih = puncak - lembah;
        printf("\nSelisih ketinggian terbesar : %d", selisih);

        }
    return 0;

    }
