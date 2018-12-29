
int stato = 0;

void setup() {
  background(127);
}

void draw() {
  switch (stato){
    case 0:
      background(127);
      println("clicca per passare allo stato 1");
      if (mousePressed) {
        stato = 1;        
      }
      
      break;
    case 1:
      background(255, 0, 0);
      println("clicca per passare allo stato 2");
      if (mousePressed) {
        stato = 2;        
      }
      break;
    case 2:
      background(0, 127, 127);
      println("clicca per passare allo stato 0");
      if (mousePressed) {
        stato = 0;
      }
      break;
  }
  delay(100);
}