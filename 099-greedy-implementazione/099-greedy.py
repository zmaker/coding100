corsi = {}
corsi["arduino"] = [9, 11]
corsi["bocce"] = [10, 12]
corsi["coding"] = [11, 13]
corsi["disegno"] = [12, 14]
corsi["elettronica"] = [13, 15]

#print(corsi)
#print(corsi["arduino"][0])

lista = corsi.keys() #corsi da verificare
processati = []

def corso_che_termina_prima(lista):
    tfine = 24
    res = None
    for c in lista:
        ti = corsi[c][0]
        tf = corsi[c][1]
        if tf <= tfine and ti >= tmin:
            tfine = tf
            res = c
    return res

def ricalcola_lista(lista, processati, tlimite):
    res = []
    for c in lista:
        if c not in processati and corsi[c][1] >= tlimite:
            res.append(c)
    return res

tmin = 0
while len(lista) > 0:
    #prendo dalla lista il corso che termina prima (ma successivo al corso già scelto)
    corso = corso_che_termina_prima(lista)
    #aggiungo il corso a una lista di risultati
    processati.append(corso)
    # il tempo da cui partire a considerare i corsi
    tmin = corsi[corso][1]
    #aggiorno la lista dei corsi da analizzare (se il tempo è succesivo a tmin li elimino)
    lista = ricalcola_lista(lista, processati, tmin)

print(processati)

