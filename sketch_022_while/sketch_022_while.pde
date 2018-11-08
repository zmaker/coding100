int n = 0;

while (n < 200) {
  n = (int)random(255);
  println(n);
} 

println("Trovato!");

do {
  n = (int)random(255);
  println(n);
} while (n < 200);

println("Trovato!");