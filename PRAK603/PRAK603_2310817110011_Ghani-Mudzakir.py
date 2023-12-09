banyak_baris = 2
banyak_angka_baris, banyak_angka_baris1 = map(int, input().split())

wadah_gsn_array = []

if banyak_angka_baris == banyak_angka_baris1:
    for x in range (banyak_baris):
        angka_masuk = list(map(int, input().split()))
        wadah_gsn_array.append(angka_masuk)
    for x in range (0, banyak_baris-1):
        for y in range(banyak_angka_baris):
            wadah_gsn_array[x][y] = wadah_gsn_array[x][y]* wadah_gsn_array[x+1][y]
    for i in range(banyak_baris-1):
        for j in range(banyak_angka_baris):
            print(wadah_gsn_array[i][j], end=" ")
    print() 
else:
    print("Jumlah Tidak Sama!")



