int x = 100;
int y = 100;
int dx = 1;
int dy = 1;

void setup(){
  size(500, 400);
  background(0);
}

void draw(){
  rect(x,y, 10,10);
  
  if ((x > (width - 10)) || (x < 0)) {
    dx = -dx;
  }
  if ((y > (height - 10)) || (y < 0)) {
    dy = -dy;
  }
  
  x = x + dx;
  y = y + dy;
}