banyak_baris, banyak_kolom = map(int, input().split())

# Kita akan membuat array dengan ukuran banyak_baris x banyak_kolom
array_wadah = []

# Kita akan membuat loop untuk memasukkan banyak bilangan ke dalam array dalam satu baris
array_wadah = [int(x) for x in input().split()]


# Coba kita print
for i in range(banyak_baris):
    for j in range(banyak_kolom):
        print(array_wadah[i * banyak_kolom + j], end=" ")
    print()
