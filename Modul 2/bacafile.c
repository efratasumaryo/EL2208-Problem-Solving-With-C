#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define max 255

int main(){

    FILE* file;
    file = fopen("barang.txt", "r");
    char baris[max];
    char *token;
    int i=0;
    int j=0;
    int found=0;
    char barang[max][max];
    int stok[max];
    int harga[max];
    char temp[max];

    while(fgets(baris, sizeof baris, file) != NULL){
        token = strtok(baris,",");
        strcpy(barang[i],token);
        
        token = strtok(NULL,",");
        stok[i]=atof(token);

        token = strtok(NULL,"\n");
        harga[i]=atof(token);

        ++i;
    }
      
    printf("\nMasukkan nama barang: ");
    fgets(temp,max,stdin);
    strtok(temp,"\n");

    while(j<i && !found){
        if(!strcasecmp(temp,barang[j])){
            found = 1;
        }
        else
            ++j;
    }

    if(found)
        printf("%s memiliki harga Rp.%d dengan jumlah barang %d",barang[j],harga[j],stok[j]);
    else
        printf("invalid input");

    fclose(file);

    return 0;
}