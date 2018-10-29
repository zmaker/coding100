
void setup(){
  background(0);
  size(500,400);
}

void draw(){
  for (int i = 0; i < 10; i++) {
    if (i == 2) continue;
    int x = 20 + (i*15);
    rect(x,100, 10,10);  
    if (i == 6) break;
  }
}