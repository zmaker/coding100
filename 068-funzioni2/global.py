#variabili globali e scope delle funzioni

#step viene vista senza problemi
_STEP = 3

def myfun():
    for n in range(0, _STEP):
        print(n)

myfun()

#variabili "statiche"

def fun2(n, lista=[]):
    lista.append(n)
    return lista

print(fun2(10))
print(fun2(23))
print(fun2(56))

#argomenti variabili
def funv(*args):
    for par in args:
        print par

funv('pane','salame','burro','latte')
