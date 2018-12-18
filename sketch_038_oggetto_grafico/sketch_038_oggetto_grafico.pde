class LED {
 private float x;
 private float y;
 
 private int stato; 
 
 LED(float x, float y) {
   this.x = x;
   this.y = y;
   stato = 0;   
 }
 
 void acceso() {
   stato = 1;
 }
 
 void spento() {
   stato = 0;
 }
 
 void print() {
   println("st: " + stato);   
 }
 
 void draw() {
   if (stato == 0) {
     fill(0);
   } else {
     fill(255,0,0);
   }
   ellipse(x, y, 20,20);   
 }
}


//------------------------
LED l1;

void setup() {
  size(200,200);
  l1 = new LED(50,50);
}

void draw() {
  if (mousePressed) {
    l1.acceso();
  } else {
   l1.spento();
  }
  l1.draw();
}