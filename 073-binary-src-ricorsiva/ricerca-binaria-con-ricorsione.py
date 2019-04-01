lista = [1,2,3,4,5,6,7,8,9,10]

def binsrc(ll, ricercato):
    print(ll)
    if len(ll) == 1:
        print("trovato")
        return True
    else:
        inf = 0
        sup = len(ll) - 1
        mid = int((inf + sup)/2)
        if ll[mid] > ricercato:
            print("sx")
            binsrc(ll[:mid-1], ricercato)
        else:
            print("dx")
            binsrc(ll[mid+1:], ricercato)

binsrc(lista, 8)
