grafo = dict()

grafo["A"] = ["B", "C"]
grafo["B"] = ["D", "E"]
grafo["C"] = ["F"]
grafo["D"] = ["F"]
grafo["E"] = ["F"]
grafo["F"] = []

print(grafo)

print(grafo["B"])

