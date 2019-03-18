
#cerco un numero indicato dall'utente 

src = input("che numero vuoi? ")

for n in range(0,100):
    print "n = ", n
    if n == src:
        print "trovato"
        break

print "fine loop"
