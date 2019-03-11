
#raw_input is used to read text (strings) from the user:
comando = raw_input("comando? ")
print(comando)

if comando == 'a':
    print ("avanti")


comando = raw_input("comando2 ? ")
print(comando)

if comando == 'a':
    print ("avanti")
else:
    print ("indietro")

num = input("numero? ")
print("numero= ", num)

if num < 0:
    print ("negativo")
elif num > 0:
    print ("positivo")
else:
    print ("0??")

    
