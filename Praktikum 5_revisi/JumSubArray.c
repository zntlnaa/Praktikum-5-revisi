/*Nama File     : JumSubArray.c*/
/*Deskripsi     : Menghitung penjumlahan sub array/tabel*/
/*Nama-NIM      : Zenit Laena Fathonah-24060121120006*/
/*Tanggal selesai : 30 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    //kamus
    int N; /*Banyaknya data*/
    int i; /*counter pertama*/
    int j; /*counter kedua*/
    int sum; /*hasil  penjumlahan sub array*/
    int T[100]; /*array static*/

    /*Algoritma*/
    printf("======================Program Penjumlahan Sub Array=======================\n");
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
        sum = 0;
        for (i = 0; i < N; i++){
            for (j = i ; j < N; j++){
                sum = sum + T[j];
                }
            }
        printf("\nMaka penjumlahan sub array adalah %d", sum);
        }
    return 0;

    }

