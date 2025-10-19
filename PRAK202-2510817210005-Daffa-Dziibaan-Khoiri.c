#include <stdio.h>
#include <stdlib.h>
int main() {
    char input1[10], input2[10];
    float hasil;
    printf("Masukkan Nilai Pertama : ");
    scanf("%s", &input1);
    printf("Masukkan Nilai Kedua: ");
    scanf("%s", &input2);
    hasil = atof(input1) +  atof(input2);
    printf("Hasil dari penjumlahan nilai pertama \"%s\" dan nilai kedua \"%s\" adalah \"%.2f\"\n", input1, input2, hasil);

    return 0;
}