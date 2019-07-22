def sum(a, b):
    return a + b

def hello():
    print("hello")

if __name__ == "__main__":
    import sys
    print("modulo in esecuzione")
    print(sys.argv)

    #python funzioni.py 12 34

    print( sum( int(sys.argv[1]), int(sys.argv[2]) ) )