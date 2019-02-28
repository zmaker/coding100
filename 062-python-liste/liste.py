lista = [12, 23, 45, 56]
print lista

#print "elemento 1: " + str(lista[0])
#print "ultimo el : " + str(lista[-1])

lista[1] = 99
print lista

lista = lista + [77, 88, 99]
print lista

lista.append(100)
print lista

lista[1:2] = [101, 102]
print lista

lista[1:2] = []
print lista

print len(lista)
