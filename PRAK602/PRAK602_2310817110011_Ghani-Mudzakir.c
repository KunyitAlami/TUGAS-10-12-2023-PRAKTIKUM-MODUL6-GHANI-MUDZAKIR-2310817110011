#include <stdio.h>

int main()
{
    // int banyak agka digunakan untuk menjadi banyaknya indeks untuk array
    int banyak_angka;
    scanf("%d", &banyak_angka);

    // kita akan meulah array dengan isi banyak_angka
    int wadah_array[banyak_angka];

    // kita akan melakukan loop untuk memasuk akan nilai ke dalam array wadah array
    for (int i = 0; i < banyak_angka; i++)
    {
        scanf("%d", &wadah_array[i]);
    }

    // sebelum memprint kita akan mengkali setiap nilai yang ada dalam wadah_array tadih lawan angka yang sesuai lwn urutannya
    for (int i = 0; i <= banyak_angka; i++)
    {
            wadah_array[i] = wadah_array[i] * (i+1);

    }

    // kita cobai print
    for (int i = 0; i < banyak_angka; i++)
    {
        printf("%d ", wadah_array[i]);
    }
    return 0;
}



