#include "stdio.h"

void main(){
    int jumlah_mahasiswa,jumlah,rata_rata;
    printf("Input:\n");
    scanf("%d", &jumlah_mahasiswa);

    int i;
    int nilai [jumlah_mahasiswa];
    
    for(i=0;i<jumlah_mahasiswa;i++){
        printf("");
        scanf("%d", &nilai[i]);
        jumlah += nilai[i];
    }

    rata_rata = jumlah/jumlah_mahasiswa;

    printf("\nOutput:");
    for(i=0;i<jumlah_mahasiswa;i++){
        if (nilai[i] > rata_rata){
            printf("\n%d", nilai[i]);
        }
    }
}
