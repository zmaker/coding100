/*
Questo è un commento su più righe
Sketch per disegnare con il mouse

maiuscole/minuscole
punto e virgola
le graffe: alt + shift + [ o ] = {}
*/

void setup(){
  //imposto le dimensioni (commento su 1 riga)
  size(400, 400);
  background(0); //sfondo nero (anche in linea)
  
  fill(255);
  stroke(255);
}

void draw() {  
  rect(mouseX, mouseY, 10, 10);    
}