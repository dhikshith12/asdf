N = int(input())
F = 0,1
for i in range(2,N):
    F = F[0]+F[1],F[1]
    F = F[0],F[0]+F[1]
print(f"{N}th fibonacci: {F[1]}")
