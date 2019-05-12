#array associativi o dizionari

telefoni = dict()

print (telefoni)

#posso definire anche con già dei valori

telefoni2 = {'paolo':3311234233, 'giovanni':3345526643, 'maria':335366366}
print(telefoni2)

#cerco un numero conoscendo il nome

num = telefoni2['maria']
print(num)

#aggiungo un telefono:

telefoni2['pippo'] = 334999999
print(telefoni2)

#elenco delle "chiavi":
print(telefoni2.keys())

#rimuovo un elemento:
del telefoni2['pippo']
print(telefoni2)

#verifica se key esiste
if 'maria' in telefoni2:
    print('presente')
else:
    print('non presente')

if 'luca' in telefoni2:
    print('presente')
else:
    print('non presente')
