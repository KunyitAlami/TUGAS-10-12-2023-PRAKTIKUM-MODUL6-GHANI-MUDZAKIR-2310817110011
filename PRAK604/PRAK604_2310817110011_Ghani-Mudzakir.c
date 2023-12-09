#include <stdio.h>
#include <string.h>

int main()
{
    // kita akan meulah beberapa array 
    // array gsn input pertama, input kedua, gsn hasil bintang dan pagar

    char input_pertama[100], input_kedua[100], hasil_cek[100], hasil_bintang[100], hasil_pagar[100];
    
    // kita masukkan scanf 
    scanf(" %[^\n]%*c", input_pertama);
    scanf(" %[^\n]%*c", input_kedua);

    // kita ulah pengkondisian gsn panjang dari input jika beda karakter jadi di proses
    if (strlen(input_pertama) == strlen(input_kedua))
    {
        for (int i = 0; i < strlen(input_pertama); i++)
        {
            if (input_pertama[i] == input_kedua[i])
            {
                if (input_pertama[i] == ' ')
                {
                    hasil_cek[i] = ' ';
                }
                else{
                    hasil_cek[i] = '*';
                }
                
            }
            else if (input_pertama[i] == ' ' && input_kedua[i] == ' ')
            {
                hasil_cek[i] = ' ';
            }
            else
            {
                hasil_cek[i] = '#';
            }
        }

        for (int i = 0; i < strlen(hasil_cek); i++)
        {
            if (hasil_cek[i] == ' ')
            {
                printf(" ");
            }
            else{
            printf("%c", hasil_cek[i]);
            }
        }

        int jumlah_bintang = 0, jumlah_pagar = 0;

        for (int i = 0; i < strlen(hasil_cek); i++)
        {
            if (hasil_cek[i] == '*')
            {
                hasil_bintang[jumlah_bintang++] = '*';
            }
            else if (hasil_cek[i] == '#')
            {
                hasil_pagar[jumlah_pagar++] = '#';
            }
        }

        printf("\n* = %d\n", jumlah_bintang);
        printf("# = %d\n", jumlah_pagar);

        if (jumlah_bintang > jumlah_pagar)
        {
            printf("Pesan Asli!\n");
        }
        else
        {
            printf("Pesan Palsu!\n");
        }
    }
    else
    {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    }

    return 0;
}
