int x = 10;

void setup(){
  size(300,200);
  background(0);
}

void draw() {
  rect(x,10, 20,20);
  delay(100);
  //x = x + 1;
  x++;
}