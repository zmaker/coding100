
void setup(){
  background(0);
  size(500,400);
}

void draw(){
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      int x = 10 + (i*15); 
      int y = 10 + (j*15);
      int r = (int)random(255);
      int g = (int)random(255);
      int b = (int)random(255);
      fill(color(r,g,b));
      rect(x,y, 10,10);  
    }
  }
}