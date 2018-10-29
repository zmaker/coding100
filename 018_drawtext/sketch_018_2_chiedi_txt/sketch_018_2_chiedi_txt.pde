import javax.swing.JOptionPane;

PFont f;

String txt;

void setup() {
  size(500,400);
  background(0);
  //crea il font
  f = createFont("Arial",16,true); //arial, 16, antialiasing
  //lo usa
  textFont(f, 36);  //c'è il size modificato
  
  //chiede un testo
  txt = JOptionPane.showInputDialog("Il tuo messaggio: ");
}

void draw() {
  
  text(txt,10,100);
}