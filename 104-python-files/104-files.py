import os

os.remove("testfile.txt")

# https://stackabuse.com/read-a-file-line-by-line-in-python/

#crea un file di testo
file = open("testfile.txt", "w")
file.write("hello world")
file.close()

#lettura di un file
print("lettura file")
f = open("testfile.txt", "r")
print(f.read())

print("leggi solo alcuni caratteri:")
f = open("testfile.txt", "r")
print(f.read(5))

#creo un file con piu righe:
os.remove("testfile.txt")

#creo un file con un po' di righe
file = open("testfile.txt", "w")
for n in range(1,100):
    file.write(str(n)+"\n")
file.close()

#stampo il file linea per lines
with open("testfile.txt") as fp:
   line = fp.readline()
   cnt = 1
   while line:
       print("Line {}: {}".format(cnt, line.strip()))
       line = fp.readline()
       cnt += 1

#aggiunge dati a un file e lo crea se necessario (+)
f = open("testfile2.txt", "a+")
f.write("nuova riga\n")
#lo leggo
f = open("testfile2.txt", "r")
print(f.read())


