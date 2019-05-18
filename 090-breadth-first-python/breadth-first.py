from collections import deque

grafo = dict()
grafo["A"] = ["B", "C"]
grafo["B"] = ["D", "E"]
grafo["C"] = ["F"]
grafo["D"] = ["F"]
grafo["E"] = ["F"]
grafo["F"] = []

def breadthfirst(partenza, destinazione):
    q = deque()
    q += grafo[partenza]
    while q:
        nodo = q.popleft()
        if nodo == destinazione:
            print("arrivato")
            return
        else:
            q += grafo[nodo]
    

breadthfirst("A", "F")
