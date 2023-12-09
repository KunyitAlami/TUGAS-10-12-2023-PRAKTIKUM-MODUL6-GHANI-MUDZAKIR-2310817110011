#kita akan meulah array gsn input 2 kali

input_pertama = input().strip()
input_kedua = input().strip()

if len(input_pertama) == len(input_kedua):
    hasil_cek = []
    for i in range (0, len(input_pertama)):
        if input_pertama[i] == input_kedua[i]:
            if input_pertama[i] == " ":
                hasil_cek.append(" ")
            else:
                hasil_cek.append("*")
        elif input_pertama == " " and input_kedua == " ":
            hasil_cek.append(" ")
        else:
            hasil_cek.append("#")
    for x in range(0, len(hasil_cek)):
        print(hasil_cek[x], end="")

    jumlah_bintang = hasil_cek.count('*')
    jumlah_pagar = hasil_cek.count('#')

    if jumlah_bintang>jumlah_pagar:
        print("\n* = ", jumlah_bintang)
        print("# = ", jumlah_pagar)
        print("Pesan Asli!")
    else:
        print("\n * = ", jumlah_bintang)
        print("# = ", jumlah_pagar)
        print("Pesal Palsu!")

else:
    print("Panjang kalimat berbeda, pesan palsu")




