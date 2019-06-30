import sqlite3

conn = sqlite3.connect("dati.db")

cursor = conn.cursor()
cursor.execute("select * from coffee ")

for row in cursor.fetchall():
    print("({}) - {} peso= {}".format(row[0], row[1], row[2]))

conn.close()