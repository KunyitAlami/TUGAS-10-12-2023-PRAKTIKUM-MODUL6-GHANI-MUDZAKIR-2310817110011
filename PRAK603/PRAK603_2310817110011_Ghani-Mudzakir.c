#include <stdio.h>

int main()
{
    // macam biasa kita meulah scanf gsn memasuk akan nilai baris wan kolomnya
    int banyak_baris, banyak_angka_baris, banyak_angka_baris1;
    banyak_baris = 2;
    scanf("%d %d", &banyak_angka_baris, &banyak_angka_baris1);
    if (banyak_angka_baris == banyak_angka_baris1)
    {
        int wadah_array[banyak_baris][banyak_angka_baris]; 

        for (int i = 0; i < banyak_baris; i++)
        {
            for (int j = 0; j < banyak_angka_baris; j++)
            {
                scanf("%d",&wadah_array[i][j]);
            }
        }

        // kita akan mengkalikan setiap nilai dengan kolom indeks yang sama
        for (int i = 0; i < banyak_baris-1; i++)
        {
            for (int j = 0; j < banyak_angka_baris; j++)
            {
                if (i + 1 < banyak_baris) {
                    wadah_array[i][j] = wadah_array[i][j] * wadah_array[i + 1][j];
                }
            }
        }  
        for (int i = 0; i < banyak_baris-1; i++)
        {
            for (int j = 0; j < banyak_angka_baris; j++)
            {
                printf("%d ", wadah_array[i][j]);
            }
        }
    }   
    else{
    printf("Jumlah Tidak Sama!");
    }
    return 0;
}



