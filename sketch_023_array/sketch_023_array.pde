//creo un array
int[] buf = {0, 12, 33};

for (int i = 0; i < buf.length; i++) {
  println(buf[i]);
}

//array vuoto
int[] dati = new int[10];

//assegno:
dati[2] = 12;
dati[4] = 3345;
dati[9] = 84;

int j = 0;
while (j < dati.length) {
  println(dati[j]);
  j++;
}