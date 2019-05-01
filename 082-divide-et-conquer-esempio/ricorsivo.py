lista = [1,2,3,4,5]

def recsum(ll):
    if len(ll) == 0:
        return 0
    elif len(ll) == 1:
        return int(ll[0])
    else:
        return ll[0] + recsum(ll[1:])

somma = recsum(lista)
print(somma)
