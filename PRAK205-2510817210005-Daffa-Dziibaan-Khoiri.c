#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, keliling, luas, sisi_miring;

    scanf("%f %f", &tinggi, &sisi_miring);

    alas = sqrt(pow(sisi_miring, 2) - pow(tinggi, 2));
    keliling = tinggi + sisi_miring + alas;
    luas = (alas * tinggi) / 2;

    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n\n", luas);

    return 0;
}