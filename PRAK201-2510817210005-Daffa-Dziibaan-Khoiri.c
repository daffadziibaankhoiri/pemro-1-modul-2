#include <stdio.h>
int main()
{
    char nama[50], nim[15], hobi[50], alamat [100], hp[50], paralel[3] , tempat_tanggal_lahir[50];
    printf("\nInput\n\n");
    printf ("Nama                 : ");
    fgets(nama, sizeof(nama), stdin);
    printf ("NIM                  : ");
    fgets(nim, sizeof(nim), stdin);
    printf ("Kelas Paralel        : ");
    fgets(paralel, sizeof(paralel), stdin);
    printf ("Tempat/Tanggal Lahir : ");
    fgets (tempat_tanggal_lahir, sizeof(tempat_tanggal_lahir), stdin);
    printf ("Alamat               : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf ("Hobby                : ");
    fgets (hobi, sizeof(hobi), stdin);
    printf ("No. Hp               : ");
    fgets (hp, sizeof(hp), stdin);

    
    printf("\nOutput\n\n");

    printf ("Nama                 : %s", nama);
    printf ("NIM                  : %s", nim);
    printf ("Kelas Paralel        : %s", paralel);
    printf ("Tempat/Tanggal Lahir : %s", tempat_tanggal_lahir);
    printf ("Alamat               : %s", alamat);
    printf ("Hobby                : %s", hobi);
    printf ("No. Hp               : %s", hp);
    return 0;
}