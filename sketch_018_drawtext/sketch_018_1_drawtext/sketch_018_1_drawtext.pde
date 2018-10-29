import javax.swing.JOptionPane;

PFont f;

void setup() {
  size(500,400);
  background(0);
  //crea il font
  f = createFont("Arial",16,true); //arial, 16, antialiasing
  //lo usa
  textFont(f, 36);  //c'è il size modificato
}

void draw() {
  text("Hello World!",10,100);
}