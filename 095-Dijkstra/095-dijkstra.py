#grafo pesato
grafo = {}
grafo["start"] = {}
grafo["start"]["a"] = 6
grafo["start"]["b"] = 2

grafo["a"] = {}
grafo["a"]["end"] = 1

grafo["b"] = {}
grafo["b"]["a"] = 3
grafo["b"]["end"] = 5

grafo["end"] = {}

#tabella costi
costo_nodi = {}
#inserisco le prime info nella tab costi:
costo_nodi["a"] = 6
costo_nodi["b"] = 2
costo_nodi["end"] = 10000 #float("inf")

#tabella parenti
parents = {}
parents["a"] = "start"
parents["b"] = "start"
parents["end"] = None

#elenco nodi processati
processati = []

def nodo_con_costo_minore(costo_nodi):
    costo_minimo = 1000000
    nodo_con_costo_minimo = None
    for n in costo_nodi:
        costo_nodo = costo_nodi[n]
        if (costo_nodo < costo_minimo) and (n not in processati):
            costo_minimo = costo_nodo
            nodo_con_costo_minimo = n
    return nodo_con_costo_minimo


nodo = nodo_con_costo_minore(costo_nodi)
while nodo is not None:
    costo_nodo = costo_nodi[nodo]
    vicini = grafo[nodo]
    for n in vicini.keys():
        nuovo_costo_nodo = costo_nodo + vicini[n]
        if costo_nodi[n] > nuovo_costo_nodo:
            costo_nodi[n] = nuovo_costo_nodo
            parents[n] = nodo

    processati.append(nodo)
    nodo = nodo_con_costo_minore(costo_nodi)

print (parents)


