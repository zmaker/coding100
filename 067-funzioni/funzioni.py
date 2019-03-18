#creare una funzione

def hello():
    print "hello"


hello()

def hello(name):
    print "hello ", name

hello("Paolo")

def hello(n, name):
    for n in range(0,n):
        print "hi! ", name

hello(5, "Paolo")

def somma(a, b):
    s = a + b
    return s

somma(5,10)

#con valori default
def hellodef(n=3, name="Bob"):
    for n in range(0,n):
        print "hi! ", name
    print("-")

hellodef()
hellodef(2)
#il seguente va in errore
#hellodef("Mike")
hellodef(name="Mike")

