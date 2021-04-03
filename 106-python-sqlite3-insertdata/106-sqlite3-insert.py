import sqlite3

conn = sqlite3.connect("dati.db")
cursor = conn.cursor()

fine_inserimento = False

while not fine_inserimento:
    cid = input("id: ")
    nome = input("nome: ")
    peso = input("peso: ")
    
    sql = f"insert into coffee "\
          f"(id, nome, peso) values "\
          f"({cid},'{nome}',{peso})"
    print(sql)
    cursor.execute(sql)
    conn.commit()
    
    ans = input("ancora? (s/n) :")
    if not (ans == 's'):
        fine_inserimento = True


conn.close()


