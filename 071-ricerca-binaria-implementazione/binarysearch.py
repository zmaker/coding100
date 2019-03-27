lista = [2, 5, 7, 8, 10, 13, 15, 17, 20, 21, 22, 50, 70, 80, 99]

ans = input("numero da cercare? ")

inf = 0
sup = len(lista) - 1

trovato = False

while not trovato:

    mid = (inf + sup) / 2

    midel = lista [mid]
    print "inf: ", inf, " sup: ", sup, " mid:", mid
    print "midel: ", midel

    if midel == ans:
        print "trovato!"
        trovato = True
    elif midel < ans:
        inf = mid + 1
    elif midel > ans:
        sup = mid - 1

    if inf > sup:
        print "non trovato"
        break
    
