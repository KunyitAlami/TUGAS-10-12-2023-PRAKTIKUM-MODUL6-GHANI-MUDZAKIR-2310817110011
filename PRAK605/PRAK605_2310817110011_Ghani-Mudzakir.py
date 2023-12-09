ordo = int(input())

matriksA = [[0] * ordo for _ in range(ordo)]
matriksB = [[0] * ordo for _ in range(ordo)]
matriksHasil = [[0] * ordo for _ in range(ordo)]

# Input matriks A
print("Matriks A")
for i in range(ordo):
    input_row = input().split()
    matriksA[i] = [int(elem) for elem in input_row]

print("Matriks B")
for i in range(ordo):
    input_row = input().split()
    matriksB[i] = [int(elem) for elem in input_row]

# kita ulah matriks nya jadi 0 dhulu
for i in range(ordo):
    for j in range(ordo):
        matriksHasil[i][j] = 0

# hitung hitungan matriks nya
for i in range(ordo):
    for j in range(ordo):
        for k in range(ordo):
            matriksHasil[i][j] += matriksA[i][k] * matriksB[k][j]

# Print hasil
print("Matriks AXB\n")
for i in range(ordo):
    for j in range(ordo):
        print(matriksHasil[i][j], end=" ")
    print()
