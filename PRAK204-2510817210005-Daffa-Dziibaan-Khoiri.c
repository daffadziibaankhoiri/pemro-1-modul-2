#include <stdio.h>

int main()
{
    float jari, tinggi, volume, luas, keliling, phi = 3.142857;
    scanf ("%f %f", &jari, &tinggi);
    volume = phi * (jari * jari) * tinggi;
    luas = 2 * phi * jari * (jari + tinggi);
    keliling = 2 * phi * jari;
    printf ("Volume = %.2f\n", volume);
    printf ("Luas = %.2f\n", luas);
    printf ("Keliling = %.2f\n", keliling);

    return 0;
}