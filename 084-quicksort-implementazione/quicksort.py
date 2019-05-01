lista = [34, 23, 18, 40, 1]
#lista = [10, 1, 23]

def qsort(ll):
    if len(ll) <= 1:
        return ll
    else:
        pivot = ll[0]

        sx = []
        for n in ll:
            if n < pivot:
                sx.append(n)

        dx = []
        for n in ll:
            if n > pivot:
                dx.append(n)

        return qsort(sx) + [pivot] + qsort(dx)


print(lista)
ql = qsort(lista)
print(ql)
