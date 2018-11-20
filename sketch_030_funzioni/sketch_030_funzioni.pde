void setup() {
  int x = somma(10, 20);
  stampa(x+"");
  hi();
}

void draw() {}

int somma(int a, int b) {
  int n = a + b;
  return n;
}

void stampa(String msg) {
  println(msg);
}

void hi(){
  println("hello!");
}