#include <stdio.h>

int main()
{
    int banyak_baris, banyak_kolom;
    // kita akan membuat sebuah int untuk menampung nilai dari banyak nya baris lwn kolom
    scanf("%d %d", &banyak_baris, &banyak_kolom);

    // kita akan membuat array dengan ukuran banyak_baris x banyak_kolom
    int array_wadah [banyak_baris][banyak_kolom];

    // kita akan membuat loop untuk memasukan banyak bilangan ke dalam array 
    for (int i = 0; i < banyak_baris; i++)
    {
        for (int j = 0; j < banyak_kolom; j++)
        {
            scanf("%d", &array_wadah[i][j]);
        }
    }
    for (int i = 0; i < banyak_baris; i++)
    {
        for (int j = 0; j < banyak_kolom; j++)
        {
            printf("%d ", array_wadah[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}



