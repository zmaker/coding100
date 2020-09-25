
void setup(){
  background(0);
  size(500,400);
}

void draw(){
  for(int i = 0; i < 10; i++) {
    rect((i*15), 100,   10,10);
  }
}