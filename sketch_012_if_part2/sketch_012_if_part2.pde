int x = 100;
int d = 1;

void setup(){
  size(500, 400);
  background(0);
}

void draw(){
  rect(x, height/2, 10,10);
  if ((x > width) || (x < 0)) {
    d = -d;
  }
  x = x + d;
}