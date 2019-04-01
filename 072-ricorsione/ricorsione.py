''' esempio di ricorsione - chiama la stessa funzione più volte '''

lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

def fric(ll):
    print(ll)
    if len(ll) == 1:
        return
    else:
        a = ll[0]
        print(a)
        fric(ll[1:])

fric(lista)
