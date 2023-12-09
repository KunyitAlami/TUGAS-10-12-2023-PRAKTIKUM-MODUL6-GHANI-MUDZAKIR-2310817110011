# kita akan melakukan input untuk banyak nya angka nya
banyak_angka = input()
banyak_angka = int(banyak_angka)

# kita meulah array ksong
wadah_array = []

# kita akan melakukan looping untuk melakukan input sesuai dengan banyak_bilangan
wadah_array = [int(x) for x in input().split()]

# kita meulah loop sagan mengkali setiap nilai di dalam array 
for i in range(banyak_angka):
    wadah_array[i] = wadah_array[i] * (i + 1)

# kita akan memprint wadah_array
for i in range(banyak_angka):
    print(wadah_array[i], end=" ")

