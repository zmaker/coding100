from collections import deque

grafo = dict()

grafo["A"] = ["B", "C", "D"]
grafo["B"] = ["G"]
grafo["C"] = ["E"]
grafo["D"] = ["F"]
grafo["E"] = ["F"]
grafo["G"] = ["F"]
grafo["F"] = []


parents = dict()

#cerco il path da A a F

def breadthfirst(partenza, destinazione):
    # creo una coda
    q = deque()
    #creo il path
    path = [destinazione]
    # aggiungo i vicini di A
    q += grafo[partenza]

    for figlio in grafo[partenza]:
        parents[figlio] = partenza
    
    #verifico cosa c'e nella coda
    while q:  #fino a che la coda non vuota
        #prendo il primo nodo
        nodo = q.popleft()

        for figlio in grafo[nodo]:
            if figlio not in parents:
                parents[figlio] = nodo
        
        if nodo == destinazione:
            print("arrivato ")

            while (nodo != partenza):
                nn = parents[nodo]
                path.insert(0, nn)
                nodo = nn
            
            return path
        else:
            q += grafo[nodo]


p = breadthfirst("A", "F")
print(p)

