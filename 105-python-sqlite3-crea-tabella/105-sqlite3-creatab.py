import sqlite3

#apro o creo
conn = sqlite3.connect("dati.db")

#creo una tabella
'''
sql = "create table coffee (" \
      "id int primary key," \
      "nome varchar(20) not null," \
      "peso float default 0 );"

conn.execute(sql)
conn.close()
