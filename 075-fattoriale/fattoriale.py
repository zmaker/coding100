def fatt(n):
    if n == 1:
        return 1
    else:
        return n * fatt(n-1)

for n in range(1,10):
    print(fatt(n))

